#include <iostream>
using namespace std;

void addOne(int *pointerNum);


int main() {

    int *p1, v1;

    p1 = new int;


    char charGo = 'y';

    do {

        cout << "Enter a number you'd like to add 1 to: ";
        cin >> v1;

        p1 = &v1;

        addOne(p1);

        cout << "\n";

        cout << "Your number plus 1 is ";
        cout << *p1;
        cout << "\n";


        charGo = 'n';

        cout << " Please enter 'Y' if you would like to re-run this code: ";
        cin >> charGo;

    } while ((charGo == 'Y') || (charGo == 'y'));


    return 0;
}

void addOne(int *pointerNum) {
    int temp;
    temp = *pointerNum;
    temp = temp + 1;
    *pointerNum = temp; 
}