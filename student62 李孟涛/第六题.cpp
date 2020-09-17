#include<iostream>
#include<fstream>
using namespace std;
 int main(void) {
	char filename1[256], filename2[256];
	cout << "请输入源文件名";
	cin >> filename1;
	cout << "请输入目标文件名";
	cin >> filename2;
	ifstream infile(filename1, ios::in | ios::binary);
	ofstream outfile(filename2, ios::out | ios::binary);
	if (!infile) {
		cout << "不能打开输入文件" << filename1 << endl;
		return 0;
}
	if (!outfile) {
		cout << "不能打开目的文件" << filename2 << endl;
		return 0;
	}
	char buff[512];
	int n;
	while (!infile.eof())
	{
		infile.read(buff, 512);
		n = infile.gcount();
		outfile.write(buff, n);
	}
	infile.close();
	outfile.close();
	return 0;
}