#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double mph, paceHours, paceMinutes, paceSeconds;

    cout << "This program intakes a rate at which a runner is running, in miles per hour (MPH), and tells the runner their pace (the amount of time it takes for them to run a mile at this speed).\n";
    cout << "Enter your running speed in MPH: ";
    cin >> mph;
    paceHours = 1 / mph;
    paceMinutes = paceHours * 60;
    paceSeconds = ( paceMinutes - floor(paceMinutes) ) * 60;
    paceMinutes = floor(paceMinutes);
    cout << "The pace when you run at a speed of ";
    cout << mph;
    cout << " miles per hour is ";
    cout << paceMinutes;
    cout << " minutes and ";
    cout << paceSeconds; 
    cout << " seconds.  This is the amount of time it takes for you to run a mile at this speed.\n";

    return 0;
}