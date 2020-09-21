#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
		fstream infile, outfile;
		infile.open(argv[2], ios::in);
		outfile.open(argv[3], ios::out);
		if (!infile)
		{
			cout << "ERROR!" << endl;
		}
		if (!outfile) {
			cout << "ERROR!" << endl;
		}
		char buff[300];
		while (infile.getline(buff, 300))
			outfile << buff << '\n';
		infile.close();
		outfile.close();
		cout << "succeed";
		
	
	return 0;
	
}