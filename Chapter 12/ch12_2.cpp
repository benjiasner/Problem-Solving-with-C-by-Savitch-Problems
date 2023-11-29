#include <iostream>
#include <cctype>
#include <cstdlib>
#include "dtime2.h"

using namespace std;

//These function declarations are for use in the definition of the overloaded input operator


void readMinute(istream& ins, int& theMinute);

int digitToInt(char c);

bool operator ==(const DigitalTime& time1, const DigitalTime& time2){
    return (time1.minute == time2.minute);
}

int main(){

    DigitalTime previous(155);
    DigitalTime current(110);

    int hours, minutes;

    current.intervalSince(previous, minutes);

    cout << "The time interval between " << previous
             << " and " << current << endl
             << "is "
             << minutes << " minutes.\n";


    return 0;
}

DigitalTime::DigitalTime(int theMinute){
    if (theMinute < 0 || theMinute > 1439){
        cout << "Illegal argument to DigitalTime constructor.";
        exit(1);
    }else{
        minute = theMinute;
    }
}

DigitalTime::DigitalTime() : minute(0){
    // body intentionally empty.
}

void DigitalTime::advance(int minutesAdded){
    int grossMinutes = minute + minutesAdded;
    minute = grossMinutes;

}

void DigitalTime::intervalSince(const DigitalTime& previousTime, int& theMinute){
    int previousMinute = previousTime.minute;

    int thisminute = minute;

    theMinute = abs(previousMinute - thisminute);

}

ostream& operator <<(ostream& outs, const DigitalTime& theObject){
    if (theObject.minute < 10){
        outs << '0';
    }
    outs << theObject.minute;
    return outs;
}

istream& operator >>(istream& ins, DigitalTime& theObject){
    readMinute(ins, theObject.minute);
    return ins;
}

int digitToInt(char c){
    return (static_cast<int>(c) - static_cast<int>('0'));
}

void readMinute(istream& ins, int& theMinute){
    char c1, c2;
    ins >> c1 >> c2;

    if ( !(isdigit(c1) && isdigit(c2) ) ){
        cout << "Error illegal input to readMinute\n";
        exit(1);
    }

    theMinute = (digitToInt(c1) * 10) + digitToInt(c2);

    if (theMinute<0 || theMinute > 59){
        cout << "Error illegal input to readMinute\n";
        exit(1);
    }
}