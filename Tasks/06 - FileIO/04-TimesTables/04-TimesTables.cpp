#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string fn = "tables.txt";
	ofstream outputToFile;
	outputToFile.open(fn);

	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			outputToFile << r * c << "\t";
		}
		outputToFile << endl;
	}
	outputToFile << endl;

	return 0;
}