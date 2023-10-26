#include <iostream>
using namespace std;

int answer = 0, remaindr = 0;

int _add(int a, int b)
{
	int result = a + b;
	return result;
}

int _sub(int a, int b)
{
	int result = a - b;
	return result;
}

int _absSub(int a, int b)
{
	int result = 0;
	if (a >= b)
	{
		result = a - b;
	}
	else
	{
		result = b - a;
	}
	return result;
}

int _mul(int a, int b)
{
	int result = a * b;
	return result;
}

void _div(int a, int b)
{
	if (b == 0)
	{
		cout << "Cannot divide by 0" << endl;
	}
	else
	{
		answer = a / b;
		remaindr = a % b;
	}
}