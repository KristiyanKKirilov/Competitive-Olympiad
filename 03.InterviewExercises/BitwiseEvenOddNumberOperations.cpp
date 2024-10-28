#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "x=";
	cin >> x;
	if ((x & 1) == 0) 
		cout << "x is even";
	else
		cout << "x is odd";
}

