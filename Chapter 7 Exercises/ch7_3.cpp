#include <iostream>
#include <cmath>
using namespace std;

int sumAll(int arr[], int length);

void normalizeArray(int arr1[], double arr2[], int length);

int main() {

    int a[] = {1, 2, 3, 10};
    int length = 4;
    double b[4];

    normalizeArray(a, b, length);

    cout << "The normalized array is ";
    for (int i=0; i < length; i++) {
        cout << b[i];
        cout << ", ";
    }
    cout << ".\n";


    return 0;
}

int sumAll(int arr[], int length) {

    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

void normalizeArray(int arr1[], double arr2[], int length) {

    double normal = sumAll(arr1, length);

    for (int i=0; i < length; i++) {
        arr2[i] = arr1[i] / normal;
    }

}