#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	if ((x ^ y) < 0) 
		cout << "different operators";
	else
		cout << "same operators";
	
}

