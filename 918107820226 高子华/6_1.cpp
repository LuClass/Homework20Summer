#include <bits/stdc++.h>
#include <ctime>
#include <fstream>
#include <filesystem>
#pragma warning(disable:4996)
using namespace std;


int main(int argc, char* argv[]){
	if (argc<=1) {
		string s0 = string(argv[1]);
		string s1 = string(argv[2]);
		ifstream infile;
		infile.open(s0, std::ios::binary);
		if(!infile.is_open()){
			cout << "Could not open file: " << s0 << endl;
		}
		else {
			ofstream outfile(s1, std::ios::binary);
			outfile << infile.rdbuf();
			infile.close();
			outfile.close();
		}
	}
	else {
		string s0;	//Perform String Shifts.cpp
		string s1;	//tttest2020.cpp
		getline(cin, s0);
		getline(cin, s1);
		ifstream infile;
		infile.open(s0, std::ios::binary);
		if (!infile.is_open()) {
			cout << "Could not open file: " << s0 << endl;
		}
		else {
			ofstream outfile(s1, std::ios::binary);
			outfile << infile.rdbuf();
			infile.close();
			outfile.close();
		}
	}

	return 0;
}