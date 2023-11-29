#include <iostream>

using namespace std;

void lastOutput(int big, int low, int count){
        cout << "The largest number you've entered: " << big << endl;
        cout << "The lowest number you've entered: " << low << endl;
        cout << "Total number of numbers entered: " << count << endl;
}

int main(){

    cout << "This program will sort three integer inputs from highest to lowest.  " << endl;

    int intInput, big, low, count;

    while (intInput > 0 || count == 0){

        cout << "Enter an integer: ";
        cin >> intInput;
        cout << endl;
        if (intInput < 0){
            lastOutput(big, low, count);
            exit(1);
        }
        if (intInput > big){
            big = intInput;
        }
        if (intInput < low || low == 0){
            low = intInput;
        }
        count++;

    }
    
    
    return 0;
}