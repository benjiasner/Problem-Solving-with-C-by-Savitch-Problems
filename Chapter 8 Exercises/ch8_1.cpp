#include <iostream>
#include <cstring>
using namespace std;

int main() {

    int strLength = 100;

    char input1[strLength];
    char input2[strLength];
    char input3[strLength];

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

    
    return 0;
}
