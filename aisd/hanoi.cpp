#include <iostream>

using namespace std;

void przenies(char x, char y, unsigned int k)
{
	cout << x << " => " << y << " " << k << endl;	
}

void hanoi(char, a, char b, char c, unsigned int n)
{	
	if (n > 0)
	{
		hanoi(a, c, b, n - 1);
		przenies(a, b, n);
		hanoi(c, b, a, n - 1);
	}
}

int main()
{
	//
}
