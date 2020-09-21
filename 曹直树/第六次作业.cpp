#include <iostream>
#include <fstream>
using namespace std;
int main (int argc,char *argv[]){
	//char filename1[256],filename2[256];


	//cout<<"输入源文件名：";

	//cout<<"输入目的文件名：";

	fstream infile,outfile;
	infile.open(argv[1],ios::in | ios::binary);
	outfile.open(argv[2],ios::out | ios::binary);
	if(!infile){
		cout<<"不能打开输入文件："<<argv[1]<<'\n';
		return 0;
	}
	if(!outfile){
		cout<<"不能打开目的文件："<<argv[2]<<'\n';
		return 0;
	}
	char buff[4096];
	int n;
	while(!infile.eof()){
		infile.read(buff,4096);
		n=infile.gcount();
		outfile.write(buff,n);
		
	}

	infile.close();
	outfile.close();

	return 0;
}
