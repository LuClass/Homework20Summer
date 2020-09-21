#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
	char filename1[256],filename2[256];
	cout<<"请输入源文件名：";
	cin>>filename1;
	cout<<"请输入目的文件名：";
	cin>>filename2;
	ifstream infile(filename1,ios::in);
	ofstream outfile(filename2);
	if(!infile){
		cout<<"不能打开输入文件："<<filename1<<'\n';
		return 0;
	}
	if(!outfile){
		cout<<"不能打开目的文件："<<filename2<<'\n';
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
