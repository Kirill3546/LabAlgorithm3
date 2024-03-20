#include <iostream>
#include <algorithm>
using namespace std;
const int N = 17; 
void task1(int X[], int M) {
    int Y[N];
    int newYIndex = 0;
    for (int i = 0; i < N; ++i) {
        if (abs(X[i]) > M) {
            Y[newYIndex++] = X[i];
        }
    }

    cout << "M: " << M << endl;
    cout << "Y: ";
    for (int i = 0; i < newYIndex; ++i) {
        cout << Y[i] << " ";
    }
    cout << endl;
}
void task2() {
    const int n = 17;
    int a[n];
    cout << "Your array: " << endl;
    for (int i = 0; i < n; i++){
        a[i] =rand() % 200 - 100;

        cout <<  a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        if (a[i] < 0){
            a[i] *= -1;
        }
        cout << a[i] << " ";
    }
    cout << endl;
}
void task3() {
    int money[] = { 1000,500,200,100,50,20,10,5,2,1 };

    int number;
    cout << "How much money do you want to have? " << endl;
    cin >> number;
    for (int i = 0; i < 10; i++){
        while (number - money[i] >= 0){
            cout << money[i] << "  ";
            number -= money[i];
        }
    }
    cout << endl;
}
const int MAX_SIZE = 100;
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    for (int i = 0; i < size1; ++i) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < size2; ++i) {
        result[size1 + i] = arr2[i];
    }
    sort(result, result + size1 + size2);
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int lastDigit = 7; 
    int X[N] = { 5, -10, 8, 0, -15, 20, -25, 30, 35, -40, 50, -55, 60, -65, 70, -75, 80 };

    cout << "Array X: ";
    for (int i = 0; i < N; ++i) {
        cout << X[i] << " ";
    }
    cout << std::endl;

    int M;
    cout << "M: ";
    cin >> M; 
    cout << "Task 1: " << endl;
    task1(X, M);
    cout << "Task 2: " << endl;
    task2();
    cout << "Task 3: " << endl;
    task3();
    
    
    cout << "Task 4: " << endl;
    int arr1[] = { 1, 3, 5, 7, 9 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = { 2, 4, 6, 8, 10 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[MAX_SIZE];
    mergeArrays(arr1, size1, arr2, size2, result);

    cout << "Result: " << endl;;
    printArray(result, size1 + size2);
    return 0;
}