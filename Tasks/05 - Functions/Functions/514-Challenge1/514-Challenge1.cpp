#include <iostream>
using namespace std;

#include "FunDec.h"

int main()
{
    int val1 = 0, val2 = 0, op = 0;
    
    cout << "Value 1 = ";
    cin >> val1;
    while (cin.peek() != '\n')
    {
        cin.clear();
        cin.ignore(123, '\n');
        cout << "Please enter an integer ";
        cin >> val1;
    }

    cout << "Value 2 = ";
    cin >> val2;
    while (cin.peek() != '\n')
    {
        cin.clear();
        cin.ignore(123, '\n');
        cout << "Please enter an integer ";
        cin >> val2;
    }
    cout << endl;

    int check = 5;
    if (val2 == 0)
    {
        check = 4;
    }

    do
    {
        cout << "Please select one of the following:" << endl;
        cout << "1 - Addition" << endl;
        cout << "2 - Subtraction (Value 1 - Value 2)" << endl;
        cout << "3 - Absolute difference" << endl;
        cout << "4 - Multiplication" << endl;
        if(val2 != 0)
        {
            cout << "5 - Division (Value 1 / Value 2)" << endl;
        }
        cin >> op;
        cout << endl;
    } while ((op < 1) || (op > check));

    switch (op)
    {
    case 1:
        cout << "Addition = " << _add(val1, val2);
        break;
    case 2:
        cout << "Subtraction = " << _sub(val1, val2);
        break;
    case 3:
        cout << "Absolute difference = " << _absSub(val1, val2);
        break;
    case 4:
        cout << "Multiplication = " << _mul(val1, val2);
        break;
    case 5:
        extern int answer, remaindr;
        _div(val1, val2);
        if (val2 != 0)
        {
            cout << "Division = " << answer << ", r" << remaindr;
        }
        break;
    }
}