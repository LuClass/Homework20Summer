#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
	ifstream infile(argv[1],ios::in);
	ofstream outfile(argv[2]);
	if(!infile){
		cout<<"���ܴ������ļ���"<<argv[1]<<'\n';
		return 0; 
	}
	if(!outfile){
		cout<<"���ܴ�Ŀ���ļ���"<<argv[2]<<'\n';
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
