#include <iostream>
using namespace std;

int main() {

    double discount;
    double basePrice = 2.75;
    double minLength;

    double carpetMeters;
    double totalCost;

    cout << "This program tells you how much your purchase of carpet will cost.  Please enter how much carpet, in meters, you wish to buy: ";
    cin >> carpetMeters;
    cout << "Now enter the discount percentage: ";
    cin >> discount;
    discount = discount * .01;
    cout << "And, finally, enter the minimum length you need to purchase for your discount to take effect: ";
    cin >> minLength;

    if (carpetMeters <= minLength) {
        totalCost = carpetMeters * basePrice;
    } else {
        totalCost = minLength * basePrice + (carpetMeters - minLength) * (1 - discount) * basePrice;
    }

    cout << "The total cost of your purchase will be $";
    cout << totalCost;
    cout << ".";


    return 0;
}