#include <iostream>
#include <cmath>
using namespace std;

void getInput(int& feet, int& inches);

double feetToMeters(int feet, int inches);

void getOutput(int feet, int inches);

int main() {

    int feet, inches;

    char charGo = 'y';

    do {

        getInput(feet, inches);

        getOutput(feet, inches);

        charGo = 'n';

        cout << " Please enter 'Y' if you would like to find the value of another one of your stock holdings: ";
        cin >> charGo;

    } while ((charGo == 'Y') || (charGo == 'y'));


    return 0;
}

void getInput(int& feet, int& inches) {
    using namespace std;
    cout << "This program converts a length in feet and inches to a length in meters in centimeters.\n";
    cout << "Input the feet portion of your length: ";
    cin >> feet;
    cout << "Now input the inches portion of your length: ";
    cin >> inches;
}

double feetToMeters(int feet, int inches) {
    double tempFeet = feet + (1.0 / 12)*inches;
    return tempFeet * .3048;
}

void getOutput(int feet, int inches) {
    using namespace std;
    cout << "The value of ";
    cout << feet;
    cout << " feet and ";
    cout << inches;
    cout << " inches in meters is ";
    cout << int( feetToMeters(feet, inches) );
    cout << " meters and ";
    cout <<  int( ( feetToMeters(feet, inches) - int( feetToMeters(feet, inches) ) )*100 );
    cout << " centimeters.";
}