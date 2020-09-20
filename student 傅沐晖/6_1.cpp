// 6_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{

	cout << "源文件名：" << argv[1] << endl;

	cout << "目标文件名：" << argv[2] << endl;

	fstream infile, outfile;	//创建文件输入、输出流对象

	

	infile.open(argv[1], ios::in | ios::binary);
	outfile.open(argv[2], ios::out | ios::binary);
	if (!infile) {
		cout << "不能打开源文件：" << argv[1] << endl;
		return 0;
	}
	if (!outfile) {
		cout << "不能打开目标文件：" << argv[2] << endl;
		return 0;
	}

	char buffer[4096];
	int n;
	while (infile.eof()==0) {
		infile.read(buffer, 4096);
		n = infile.gcount();	//记录读取的字节数（以防可读取的字节小于4096个
		outfile.write(buffer, n);	//参数需要写n而非4096
	}

	infile.close(); outfile.close();	//关闭文件

	return 0;
}
