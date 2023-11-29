#include <iostream>
#include <string>
using namespace std;

int main() {

    string input1, input2, input3;

    cout << "Write a name, age, and title in the following format: \n";
    cout << "NAME AGE TITLE\n";
    cout << "Write here: ";
    cin >> input1;
    cin >> input2;
    cin >> input3;
    cout << "Output: ";
    cout << input1;
    cout << " ";
    cout << input2;
    cout << " ";
    cout << input3;
    cout << "\n";

    cout << "The name of the person is ";
    cout << input1;
    cout << ", their age is ";
    cout << input2;
    cout << " and they have an occupation of ";
    cout << input3;
    cout << ".";

    
    return 0;
}
