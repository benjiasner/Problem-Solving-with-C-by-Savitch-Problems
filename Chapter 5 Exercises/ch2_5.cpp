#include <iostream>

using namespace std;

int main(){

    cout << "This program will help you determine if a meeting room is in violation of fire law regulations.  ";

    char keepGoing = 'y';
    int roomNum = 0;
    while (keepGoing == 'y' || keepGoing == 'Y'){
        roomNum++;
        int maxCap, numAttend;
        cout << "This input will be for room number " << roomNum << ". " << endl;
        cout << "Please enter the maximum room capacity: ";
        cin >> maxCap;
        cout << endl;
        cout << "Now enter the number of people attending: ";
        cin >> numAttend;
        cout << endl;

        if (maxCap >= numAttend){
            cout << "This meeting of " << numAttend << " individuals is lawful. ";
        }else{
            cout << "This meeting of " << numAttend << " individuals is in violation of fire safety regulations and is therefore unlawful. ";
            cout << "You must exclude " << (numAttend - maxCap) << " individuals for this meeting to be lawful.";
        }
        cout << endl;

        cout << "If you would like to check another room, press 'y' and enter, otherwise press any other key and enter: ";
        cin >> keepGoing;
    }

    return 0;
}