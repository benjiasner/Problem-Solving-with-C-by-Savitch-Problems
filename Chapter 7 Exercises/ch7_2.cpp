#include <iostream>
#include <cmath>
using namespace std;

int sumAll(int arr[], int length);

int main() {

    int a[] = {1, 2, 3, 4};
    int length = 4;

    cout << "The sum of the numbers in the array is ";
    cout << sumAll(a, length);
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