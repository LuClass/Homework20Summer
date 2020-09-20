#include<iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[]){
ifstream infile(argv[1],ios::in);
	ofstream outfile(argv[2]);
if (!infile) {
cout << "不能打开输入文件:"<<endl;
return 0;
}
if (!outfile) {
cout << "不能打开目的文件:" << endl;
return 0;
}
char buff[4096];
int n;
while (!infile.eof()) { //文件不结束，继续循环
infile.read(buff, 4096); //一次读4096 个字节
n = infile.gcount(); //取实际读的字节数
outfile.write(buff, n); //按实际读的字节数写入文件
}
infile.close(); outfile.close();
return 0;
}
