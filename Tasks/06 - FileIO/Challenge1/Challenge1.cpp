#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int CheckIfOpen(ifstream& reading);
int CheckIfOpen(ofstream& writing);

int main()
{
    // Open the read file
    ifstream reading;
    reading.open("Iwrotethis.txt");

    // Open the write file
    ofstream writing;
    writing.open("copy.txt");

    // Check if both files are open
    CheckIfOpen(reading);
    CheckIfOpen(writing);

    char a;
    while(reading.get(a))
    {
        writing.put(a);
    }

    return 0;
}

int CheckIfOpen(ifstream& reading)
{
    if (!reading.is_open())
    {
        cout << "Reading file not found";
        return -1;
    }
}

int CheckIfOpen(ofstream& writing)
{
    if (!writing.is_open())
    {
        cout << "Writing file not found";
        return -1;
    }
}