#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <regex>
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

    regex regexPattern("id=\"location\"[^\\s]*\\s*(\\w+)");
    smatch match;
    regex_search(fullString, match, regexPattern);

    if (match.size() >= 2)
    {
        cout << "Location: " << match[1] << endl;
    }
    else
    {
        cout << "No matches found" << endl;
        return -1;
    }
}