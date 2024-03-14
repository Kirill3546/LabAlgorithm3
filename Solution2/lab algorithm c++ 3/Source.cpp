#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    cout << "Your 10 elements of array: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }

    int needVal;
    cout << "Which number are you looking for: ";
    cin >> needVal;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == needVal) {
            cout << "Value " << needVal << " found in " << i << "position: " << endl;
            return 0;
        }
    }

    cout << "Value " << needVal << " not found in array." << endl;
    return -1;
}