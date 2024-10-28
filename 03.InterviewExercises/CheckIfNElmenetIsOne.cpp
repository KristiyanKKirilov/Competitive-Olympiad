#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "x=";
	cin >> x;
	cout << "n=";
	cin >> n;

	if ((x & (1 << n)) != 0)
		cout << "n-bit is 1";
	else
		cout << "n-bit is not 1";
}
