#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;
int main(int argc, char* argv[]) {
	char filename1[256], filename2[256];
	strcpy(filename1, argv[1]);
	strcpy(filename2, argv[2]);
	fstream infile, outfile;
	infile.open(filename1, ios::in );
	outfile.open(filename1, ios::out);
	if (!infile)
		return 0;
	if (!outfile)
		return 0;
	char buff[4096];
	int n;
	while (!infile.eof()) {
		infile.getline(buff,400);
		outfile << buff << '\n';
	}
	infile.close();
	outfile.close();
	return 0;
}
