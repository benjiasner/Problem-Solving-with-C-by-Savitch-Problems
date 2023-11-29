#include <iostream>
using namespace std;

int main() {
    double radius, vm;
    const double pre = (4.0 / 3.0) * 3.1415;

    cout << "Enter radius of a sphere.";
    cout << endl;

    cin >> radius;
    vm = pre * radius * radius * radius;
    cout << "The volume is ";
    cout << vm;
    cout << endl;
    return 0;
}