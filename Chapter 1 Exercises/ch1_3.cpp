#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Press return after entering a number.\n";
    cout << "Please enter the first number you'd like to sum:\n";
    cin >> num1;
    cout << "Now enter the number you want to add to "; 
    cout << num1;
    cout << "\n";
    cin >> num2;
    cout << "The sum of ";
    cout << num1;
    cout << " and ";
    cout << num2;
    cout << " is ";
    cout << num1 + num2;
    cout << ". \n";
    return 0;
}