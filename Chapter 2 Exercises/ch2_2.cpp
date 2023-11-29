#include <iostream>
using namespace std;

int main() {
    double base, output;
    int power;
    cout << "This program intakes a number and multiplies it to an (positive or negative) integer power.\n";
    cout << "Input your base number/the number you want multiplied to a certain power: ";
    cin >> base;
    cout << "\n Now input the integer power you want ";
    cout << base;
    cout << " multiplied by: ";
    cin >> power;
    if (power == 0) {
        output = 1;
    } else if (power < 1) {
        int negN = power;
        double denominator = 1;
        while (negN < 0) {
            denominator = denominator * base;
            cout << "\n denominator: ";
            cout << denominator;
            negN++;
            cout << "\n negN:";
            cout << negN;
        }
        output = 1 / denominator;
    } else {
        int posN = power;
        output = 1;
        while (posN > 0) {
            output = output * base;
            posN--;
        }
    }
    cout << "\n The value of ";
    cout << base;
    cout << " to the ";
    cout << power;
    cout << " power is ";
    cout << output;
    cout << ".\n";
    return 0;
}