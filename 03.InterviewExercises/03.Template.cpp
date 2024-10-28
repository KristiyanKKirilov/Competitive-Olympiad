#include <iostream>
using namespace std;

const int MAX_LENGTH = 10;  

int main() {
    for (int i = 2; i <= MAX_LENGTH; i += 2) {
        for (int j = i; j <= MAX_LENGTH; j += 2) {
            cout << j << " ";
        }
        cout << endl;
    }

    for (int i = MAX_LENGTH; i >= 2; i -= 2) {
        for (int j = i; j <= MAX_LENGTH; j += 2) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
