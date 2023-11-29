#include <iostream>

using namespace std;

int main(){

    int max;

    cout << "This program allows you to get all the prime numbers between 0 and a number of your choosing!" << endl;
    cout << "Please input a number: ";
    cin >> max;

    for (int i = 1; i <= max; i++){
        int count = 0;
        for (int j=1; j<=i; j++){
            if (i % j == 0){
                count++;
            }
        }
        if (count == 2 || count == 1){
            cout << i << " ";
        }
    }

    return 0;
}