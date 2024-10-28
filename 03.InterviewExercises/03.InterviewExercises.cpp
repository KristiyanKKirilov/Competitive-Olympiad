#include <iostream>
#include<iomanip>

using namespace std;


int main()
{
	int p;
	cin >> p;
	int i = 2;
	int k = 0;

	
	while (p > 1) {
		if (p % i == 0) {
			p /= i;
			k++;
		}
		else {
			i++;
			p /= i;
			k = 0;
		}
		cout << i;
	}	
	
}

