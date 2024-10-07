#include <iostream>

using namespace std;

const int MAX_LENGTH = 10000;
int findRepeatingNumber(int numbers[], int length);

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

        } while (numbers[i] >= n);
        
    }
    

    int repeatingNumber = findRepeatingNumber(numbers, n);

    cout << "The repeating number is: " << repeatingNumber << endl;

    return 0;
}

int findRepeatingNumber(int numbers[], const int length) {
    bool isRepeating[MAX_LENGTH];

    int repeatingNumber = -1;

    for (int i = 0; i < length; i++) {
        if (isRepeating[numbers[i] - 1]) {
            isRepeating[numbers[i] - 1] = false;
        }
        else {
            repeatingNumber = numbers[i];
        }
    }

    return repeatingNumber;
}
