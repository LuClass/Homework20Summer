#include<iostream>
#include<fstream>
using namespace std;
 int main(void) {
	char filename1[256], filename2[256];
	cout << "������Դ�ļ���";
	cin >> filename1;
	cout << "������Ŀ���ļ���";
	cin >> filename2;
	ifstream infile(filename1, ios::in | ios::binary);
	ofstream outfile(filename2, ios::out | ios::binary);
	if (!infile) {
		cout << "���ܴ������ļ�" << filename1 << endl;
		return 0;
}
	if (!outfile) {
		cout << "���ܴ�Ŀ���ļ�" << filename2 << endl;
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