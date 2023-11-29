#include <iostream>
using namespace std;

int main() {
    char ans1;

    do {

        cout << "Hello!  Are you having a good day? (y/n): ";
        cin >> ans1;
        
        if (ans1 == 'y') {
            cout << "I'm glad to hear that!";
        } else {
            cout << "I hope your day gets better soon.";
        }

        cout << "\n";

    } while (ans1 == 'n');

    return 0;
}