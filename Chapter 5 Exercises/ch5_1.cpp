#include <iostream>
#include <cmath>
using namespace std;

void threeNumSorter(double &num1, double &num2, double &num3);

void swapValues(double &variable1, double &variable2);

int main() {

    double number1;
    double number2;
    double number3;

    cout << "This program intakes three numbers of your choosing, in any order, and organizes them from greatest to smallest.\n";
    cout << "Please enter your first number: ";
    cin >> number1;
    cout << "Now your second number: ";
    cin >> number2;
    cout << "And finally your third number: ";
    cin >> number3;

    // now call threeNumSorter to sort these numbers
    threeNumSorter(number1, number2, number3);


    return 0;
}

void threeNumSorter(double &num1, double &num2, double &num3) {
    double temp1, temp2;
    cout << "You entered the numbers in the following order: ";
    cout << num1;
    cout << ", ";
    cout << num2;
    cout << ", ";
    cout << num3;
    cout << ", ";

    // organize the numbers largest to smallest
    if (num2 > num1) {
        //1, 2, 3
        //1, 3, 2
        swapValues(num1, num2);
        // 2, 1, 3
        // 3, 1, 2
        if (num3 > num1) {
            swapValues(num1, num3);
            //3, 1, 2
            if (num3 > num2 ) {
                swapValues(num2, num3);
            }
        } else if (num3 > num2){
            swapValues(num2, num3);

            if (num3 > num1) {
                swapValues(num1, num3);
            }
        }

    } else if (num3 > num1 ) {
        // 2, 1, 3
        // 3, 1, 2
        swapValues(num1, num3);
        //3, 1, 2
        //

        if (num3 > num2) {
            swapValues(num3, num2);
            //3, 1, 2
            if (num2 > num1) {
                swapValues(num1, num2);
            }
        }
    } else if (num3 > num2) {
        swapValues(num2, num3);
    }

    cout << "These numbers organized from highest to lowest are: ";
    cout << num1;
    cout << ", ";
    cout << num2;
    cout << ", ";
    cout << num3;
    cout << ", ";
}

void swapValues(double &variable1, double &variable2){
    double temp;

    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}