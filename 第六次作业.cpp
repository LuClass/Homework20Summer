#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(int argc,char* argv[]){
	fstream infile,outfile;
	infile.open(argv[1],ios::in);
	outfile.open(argv[2],ios::out);
	if(!infile){
		cout<<"���ܴ������ļ�"<<endl;
		return 0;
	}
	if(!outfile){
		cout<<"���ܴ�Ŀ���ļ�"<<endl;
		return 0;
	}
	char buff[4096];
	int n;
	while (infile.eof()==0)
	{
		infile.read(buff, 4096);
		n = infile.gcount();
		outfile.write(buff, n);
	}
	infile.close();
	outfile.close();
	return 0;
}
