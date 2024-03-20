#include <iostream>
using namespace std;
int main() {
	double index;
	const int size = 10;
	int arr[size];
	cout << "Enter your array: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << endl;
	int value;
	cout << "Enter your value: ";
	cin >> value;
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) {
			index = i;
			cout << "Same element: " << arr[i] << endl;
			cout << "Index of the same element: " << index << endl;
		}
		else {
			cout << "There is no same elements ";
			break;
		}
	}
	
}