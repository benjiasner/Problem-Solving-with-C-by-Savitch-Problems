#include <iostream>
#include <cmath>
using namespace std;

double calcH(double base, double height);
//returns hypotenuse of the two numbers n1 and n2


int main() {

    double base;
    double height;
    char charGo = 'y';

    do {

        cout << "This program tells you the length of the hypotenuse of a triangle given the values of the triangle's base and height (which are perpendicular to one another).  Please enter the size of the base: ";
        cin >> base;
        cout << "\n";
        cout << "Now enter the value of the height: ";
        cin >> height;
        
        cout << "The value of your hypotenuse is ";
        cout << calcH(base, height);
        cout << ".";

        charGo = 'n';

        cout << " Please enter 'Y' if you would like to find the hypotenuse of another triangle: ";
        cin >> charGo;

    } while ((charGo == 'Y') || (charGo == 'y'));


    return 0;
}

double calcH(double base, double height) {
    return sqrt( pow(base, 2) + pow(height, 2) );
}