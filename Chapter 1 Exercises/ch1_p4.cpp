#include <iostream>
using namespace std;

int main() {
    double time, distance;
    const double acceleration = 32; //feet per second
    cout << "This program tells you how far an object falls in a given amount of time (absent wind resistance).\n";
    cout << "Enter the amount of time (in seconds) your object is in freefall: ";
    cin >> time;
    cout << "\n";
    distance = (acceleration * time * time) / 2;
    cout << "The distance your object will fall is ";
    cout << distance;
    cout << " feet ";
    cout << "in ";
    cout << time;
    cout << " seconds!";
    return 0;
}   