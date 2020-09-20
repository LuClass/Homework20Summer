#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char* argv[])
{
	//cout<<argv[1];
	ifstream infile(argv[1],ios::in);
	ofstream outfile(argv[2]);
	if(!infile || !outfile)
	{
		cout<<"不能打开输入文件"<<endl;
		return 0;
	}
	infile.unsetf(ios::skipws);
	char ch[300];
	while(infile.getline(ch,300))
		outfile<<ch<<'\n';
	infile.close();
	outfile.close();
	return 0;
}
