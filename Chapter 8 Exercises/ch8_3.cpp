#include <iostream>
#include <string>
using namespace std;

char getInitial(string name);


int main() {

    string firstName, lastName;
    char firstInitial, lastInitial;


    char charGo = 'y';

    do {

        cout << "Enter your first and last name: ";
        cin >> firstName>>lastName;
        cout << "\n";

        firstInitial = getInitial(firstName);
        lastInitial = getInitial(lastName);

        cout << "Your initials are ";
        cout << firstInitial;
        cout << lastInitial;
        cout << "\n";


        charGo = 'n';

        cout << " Please enter 'Y' if you would like to find the initials of another name: ";
        cin >> charGo;

    } while ((charGo == 'Y') || (charGo == 'y'));


    return 0;
}

char getInitial(string name) {
    return name[0];
}