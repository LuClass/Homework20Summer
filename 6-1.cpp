#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


int main(int argc,char *argv[])
{
	if (argc!=3)
		cout<<"Error"<<endl;
	string filename1, filename2;
	filename1=argv[1];
	filename2=argv[2];
	fstream infile, outfile;
	infile.open(filename1);
	outfile.open(filename2);
	if (!infile)
	{
		cout << "不能打开输入文件:" << filename1 << '\n';
		return 0;
	}
	if (!outfile)
	{
		cout << "不能打开目的文件:" << filename2 << '\n';
		return 0;
	}
	char buff[4096];
	int n;
	while (!infile.eof())
	{
		infile.read(buff, 4096);
		n = infile.gcount();
		outfile.write(buff, n);
	}
	infile.close();
	outfile.close();
	cout<<"Copy Success!"<<endl;
	return 0;
}
