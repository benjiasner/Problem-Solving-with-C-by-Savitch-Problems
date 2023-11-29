#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Press return after entering a number.\n";
    cout << "Please enter a number you'd like to divide:\n";
    cin >> num1;
    cout << "Now enter the number by which you'd like to divide "; 
    cout << num1;
    cout << "\n";
    cin >> num2;
    cout << "The division of the integer ";
    cout << num1;
    cout << " by ";
    cout << num2;
    cout << " is ";
    cout << num1 / num2;
    cout << ". \n";
    return 0;
}