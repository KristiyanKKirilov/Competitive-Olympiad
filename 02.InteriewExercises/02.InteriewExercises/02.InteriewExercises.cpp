#include <iostream>

using namespace std;

const int MAX_LENGTH = 10000;
int findMissingNumber(int numbers[], int length);

int main() {
	int n;

	cout << "Enter length of array: ";
	cin >> n;
	int numbers[MAX_LENGTH];

	cout << "Enter " << n << " natural numbers: " << endl;

	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "Enter number -  " << i + 1 << ": ";
			cin >> numbers[i];

		} while (numbers[i] > n);

	}


	int missingNumber = findMissingNumber(numbers, n);

	cout << "The missing number is: " << missingNumber << endl;

	return 0;
}

int findMissingNumber(int numbers[], const int length) {
	bool isMissing[MAX_LENGTH];

	int missingNumber = 0;

	for (int i = 0; i < length; i++) {
		isMissing[numbers[i] - 1] = false;


	}

	for (int i = 0; i < length; i++)
	{
		if (isMissing[i]) {
			missingNumber = i + 1;
		}
	}

	return missingNumber;
}
