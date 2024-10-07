#include <iostream>
using namespace std;

const int MAX_LENGTH = 6;

int main()
{
	int arr[MAX_LENGTH] = { 1, 2, 3, 4, 5, 6 };
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		for (int j = i; j < MAX_LENGTH; j++)
		{
			cout << arr[j] << ' ';
		}
		cout << endl;
	}

	for (int i = MAX_LENGTH - 1; i >= 0; i--)
	{
		for (int j = i; j < MAX_LENGTH; j++)
		{
			cout << arr[j] << ' ';
		}
		cout << endl;
	}


	return 0;
}


