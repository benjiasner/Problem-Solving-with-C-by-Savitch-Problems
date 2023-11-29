#include <iostream>
#include <cmath>
using namespace std;

double stockPrice(int wholePrice, int numeratorPrice, int denominatorPrice);
//this calculates the price of a stock given its whole value, numerator/denominator
// and should be used when a price is of the format X y/z


int main() {

    int shares;
    int wholePrice;
    int numeratorPrice;
    int denominatorPrice;
    double valueOneShare;
    double totalValue;

    char charGo = 'y';

    do {

        cout << "This program tells you the value of your stock if it is in the format Price + fraction Price.  Please insert the total number of shares you own, the whole price, numerator of fraction price, and denominator of fraction price.\n";
        cout << "Total number of shares you own: ";
        cin >> shares;
        cout << "\nWhole price of stock: ";
        cin >> wholePrice;
        cout << "\nNumerator fraction price of stock: ";
        cin >> numeratorPrice;
        cout << "\nDenominator fraction price of stock: ";
        cin >> denominatorPrice;

        valueOneShare = stockPrice(wholePrice, numeratorPrice, denominatorPrice);
        totalValue = valueOneShare*shares;

        
        cout << "The value of your stock holding is ";
        cout << totalValue;
        cout << ".\n";

        charGo = 'n';

        cout << " Please enter 'Y' if you would like to find the value of another one of your stock holdings: ";
        cin >> charGo;

    } while ((charGo == 'Y') || (charGo == 'y'));


    return 0;
}

double stockPrice(int wholePrice, int numeratorPrice, int denominatorPrice) {
    double numeratorPriceD = numeratorPrice;
    return wholePrice + ( numeratorPriceD / denominatorPrice );
}