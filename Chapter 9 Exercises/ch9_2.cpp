#include <iostream>
using namespace std;

typedef int* IntArrayPtr;


int main() {

    int numDoubles = 0;

    cout << "Enter the number of doubles you want to store in your dynamic array: ";
    cin >> numDoubles;

    IntArrayPtr a;
    a = new int[numDoubles];

    for (int i = 0; i < numDoubles; i++){

        cout << "\n";

        cout << "Please enter the number you would like in the index number ";
        cout << i;
        cout << " entry of your array: ";

        cin >> a[i];

    }
    

    int sum = 0;
    double average;

    for (int j = 0; j < numDoubles; j++) {
        sum = sum + a[j];
    }
    
    average = sum / (numDoubles * 1.0);
    cout << "\n";

    cout << "The average of your dynamic array entries is ";
    cout << average;
    cout << ".\n";

    delete [] a;

    return 0;
}
