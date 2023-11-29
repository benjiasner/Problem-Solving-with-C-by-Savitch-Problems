#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Press return after entering a number.\n";
    cout << "Please enter the number from which you'd like to subtract:\n";
    cin >> num1;
    cout << "Now enter the number you want to subtract from "; 
    cout << num1;
    cout << "\n";
    cin >> num2;
    cout << "The difference between ";
    cout << num1;
    cout << " and ";
    cout << num2;
    cout << " is ";
    cout << num1 - num2;
    cout << ". \n";
    return 0;
}