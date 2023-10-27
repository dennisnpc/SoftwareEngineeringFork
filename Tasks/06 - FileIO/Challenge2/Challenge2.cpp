#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    ifstream read;
    read.open("Fake Python.html");

    if (read.is_open() == false)
    {
        cout << "Error, file not open for read" << endl;
        return -1;
    }

    string line;
    string fullString;
    while (getline(read, line))
    {
        fullString += (line + "\n");
    }

    int pos = fullString.find("id=\"location\"");
    string closeLocation = fullString.substr(pos);
    istringstream readString(closeLocation);
    string Location;
    readString >> Location >> Location;
    cout << "Location is " << Location << endl;
}