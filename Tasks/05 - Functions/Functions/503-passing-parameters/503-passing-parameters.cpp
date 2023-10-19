#include <iostream>
#include <string>
using namespace std;

void displayBanner(int stringLen)
{
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

void makeBanner(string message, int length)
{
	//Write the banner above
	displayBanner(length);

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	displayBanner(length);
}

int main()
{
	//Type in message
	string message;
	getline(cin, message);

	//Get the length of the string
	int L = message.length();			//L is now a LOCAL variable

	cout << endl;
	makeBanner(message, L);

	//Tell the calling shell all is well
	return 0;
}