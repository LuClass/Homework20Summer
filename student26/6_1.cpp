#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char* argv[])
{
	fstream infile,outfile;
	infile.open(argv[1],ios::in|ios::binary);
	outfile.open(argv[2],ios::out|ios::binary);
	if(!infile)
	{
		cout<<"打开原文件失败"<<endl;
		return 1; 
	}
	if(!outfile)
	{
		cout<<"打开目标文件失败"<<endl;
		return 1;
	}
	char buff[4096];
	int n;
	while(!infile.eof())
	{
		infile.read(buff,4096);
		n=infile.gcount();
		outfile.write(buff,n);
	}
	
	infile.close();
	outfile.close();
	return 0;
}















