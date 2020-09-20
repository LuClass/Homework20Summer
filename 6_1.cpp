#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[]){
	fstream infile,outfile;
	infile.open(argv[1]);
	outfile.open(argv[2]);
	if (!infile){
		cout<<"不能打开输入文件："<<argv[1]<<endl;
		return 0;
	}
	if (!outfile){
		cout<<"不能打开目的文件："<<argv[2]<<endl;
		return 0;
	}
	char ch;
	while (infile>>ch)
		outfile<<ch;
	infile.close();
	outfile.close();
	return 0;
} 
