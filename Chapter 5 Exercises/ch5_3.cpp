#include <iostream>
#include <cmath>
using namespace std;

void getInput(int& meters, int& centimeters);

double feetToMeters(int meters, int centimeters);

void getOutput(int meters, int centimeters);

int main() {

    int meters, centimeters;

    char charGo = 'y';

    do {

        getInput(meters, centimeters);

        getOutput(meters, centimeters);

        charGo = 'n';

        cout << " Please enter 'Y' if you would like to find the value of another one of your stock holdings: ";
        cin >> charGo;

    } while ((charGo == 'Y') || (charGo == 'y'));


    return 0;
}

void getInput(int& meters, int& centimeters) {
    using namespace std;
    cout << "This program converts a length in meters and centimeters to a length in feet and inches.\n";
    cout << "Input the meters portion of your length: ";
    cin >> meters;
    cout << "Now input the centimeters portion of your length: ";
    cin >> centimeters;
}

double metersToFeet(int meters, int centimeters) {
    double tempMeters = meters + (1.0 / 100)*centimeters;
    return tempMeters / .3048;
}

void getOutput(int meters, int centimeters) {
    using namespace std;
    cout << "The value of ";
    cout << meters;
    cout << " meters and ";
    cout << centimeters;
    cout << " centimeters in feet and inches is ";
    cout << int( metersToFeet(meters, centimeters) );
    cout << " feet and ";
    cout <<  ( ( metersToFeet(meters, centimeters) ) - int ( metersToFeet(meters, centimeters) ) )* (12);
    cout << " inches.";
}