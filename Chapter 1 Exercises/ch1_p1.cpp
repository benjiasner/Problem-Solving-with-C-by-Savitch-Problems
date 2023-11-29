#include <iostream>
using namespace std;

int main() {
    double num1, num2, sum, product;
    cout << "This program provides you with both the sum and the product of two numbers.\n";
    cout << "Please enter the first number you'd like summed and multiplied: ";
    cin >> num1;
    cout << "\n";
    cout << "Now enter the second number you'd like summed and multiplied to the first number: "; 
    cin >> num2;
    cout << "\n";
    sum = num1 + num2;
    product = num1 * num2;
    cout << "The sum of ";
    cout << num1;
    cout << " and ";
    cout << num2; 
    cout << " is ";
    cout << sum;
    cout << " and their product is ";
    cout << product;
    cout << ". \n";
    return 0;
}