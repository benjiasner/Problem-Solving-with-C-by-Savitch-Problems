#include <iostream>
using namespace std;

int main() {

    const double discount = .15;
    const double basePrice = 2.75;

    double carpetMeters;
    double totalCost;

    cout << "This program tells you how much your purchase of carpet will cost.  Please enter how much carpet, in meters, you wish to buy: ";
    cin >> carpetMeters;

    if (carpetMeters <= 10) {
        totalCost = carpetMeters * basePrice;
    } else {
        totalCost = 10 * basePrice + (carpetMeters - 10) * (1 - discount) * basePrice;
    }

    cout << "The total cost of your purchase will be $";
    cout << totalCost;
    cout << ".";


    return 0;
}