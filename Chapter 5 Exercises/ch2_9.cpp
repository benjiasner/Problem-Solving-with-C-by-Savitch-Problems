#include <iostream>

using namespace std;

int main(){

    cout << "This program will sort three integer inputs from highest to lowest.  " << endl;

    char keepGoing = 'y';
    while (keepGoing == 'y' || keepGoing == 'Y'){
        int d1, d2, d3, temp;

        cout << "Enter digit 1: ";
        cin >> d1;
        cout << endl;
        cout << "Now digit 2: ";
        cin >> d2;
        cout << endl;
        cout << "Now digit 2: ";
        cin >> d3;

        if (d1 > d2 && d1>d3){
            //order should be d1 ...
            if(d2<d3){
                // order should be d1 d3 d2
                temp = d2;
                d2 = d3;
                d3 = temp;
            }
            // order should be d1 d2 d3
        }else if (d1<d2 && d1>d3){
            //order should be d2 d1 d3
            temp = d2;
            d2 = d1;
            d1 = temp;

        }else{ //d1<d2 && d1<d3
            //order should be ... d1
            temp = d1;
            d1 = d3;
            d3 = temp;

            if(d2>d1){
                temp = d2;
                d2 = d1;
                d1 = temp;
            }

        }

        cout << "Your input, sorted is: " << d1 << " " << d2 << " " << d3 << endl;

        cout << "If you would like to sort another combinations of three digits, press 'y' and enter, otherwise press any other key and enter: ";
        cin >> keepGoing;
    }

    return 0;
}