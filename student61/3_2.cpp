#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
	ifstream infile(argv[1],ios::in);
	ofstream outfile(argv[2]);
	if(!infile){
		cout<<"不能打开输入文件："<<argv[1]<<'\n';
		return 0; 
	}
	if(!outfile){
		cout<<"不能打开目的文件："<<argv[2]<<'\n';
		return 0;
	}
	infile.unsetf(ios::skipws);
	char ch;
	while(infile>>ch)
	outfile<<ch;
	infile.close();
	outfile.close();
	return 0;
	
	
	
	
}
