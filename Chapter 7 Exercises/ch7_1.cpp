#include <iostream>
#include <cmath>
using namespace std;

double findMax(double arr[], int length);

int main() {

    double a[] = {3, 10, 25, 25.9, 5, 1, 10000.1, 10, 10, 10};
    int length = 10;

    cout << "The largest number in the array is ";
    cout << findMax(a, length);
    cout << ".\n";


    return 0;
}

double findMax(double arr[], int length) {

    double max = 0;

    for (int i = 0; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}