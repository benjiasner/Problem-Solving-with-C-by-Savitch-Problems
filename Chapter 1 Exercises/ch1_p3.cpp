#include <iostream>
using namespace std;

int main() {
    int numPennies, numNickels, numDimes, numQuarters, sum;
    double pennyVal = .01;
    double nickelVal = .05;
    double dimeVal = .1;
    double quarterVal = .25;
    cout << "This program tells you how much your spare change is worth!\n";
    cout << "Enter the number of pennies you have: ";
    cin >> numPennies;
    cout << "\n";
    cout << "Enter the number of nickels you have: ";
    cin >>  numNickels;
    cout << "\n";
    cout << "Enter the number of dimes you have: ";
    cin >>  numDimes;
    cout << "\n";
    cout << "Enter the number of quarters you have: ";
    cin >>  numQuarters;
    cout << "\n";
    cout << "The total value of your spare change is $";
    cout << (pennyVal * numPennies) + (nickelVal * numNickels) + (dimeVal * numDimes) + (quarterVal * numQuarters);
    cout << "!\n";
}