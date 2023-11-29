#include <iostream>
#include "TransportVehicle.h"
#include "Plane.h"
#include "Truck.h"
#include "FreightContainer.h"

using namespace transportvehicle;
using namespace std;

int main(){

    Plane plane1(1, 10, 100, 500), plane2(2, 10, 100, 500), plane3;
    Truck truck1(3, 5, 20, 1000), truck2;

    //first lets test the set/get functions for Plane and truck;

    truck2.setVehicleVN(4);
    truck2.setVehicleAge(5);
    truck2.setVehicleMaxCap(20);
    truck2.setKilometers(1000);

    cout << "truck 2 stats: " << endl;
    cout << "VN: " << truck2.getVehicleVN() << endl;
    cout << "age: " << truck2.getVehicleAge() << endl;
    cout << "max capacity: " << truck2.getVehicleMaxCap() << endl;
    cout << "kilometers traveled: " << truck2.getKilometers() << endl;

    plane3.setVehicleVN(5);
    plane3.setVehicleAge(5);
    plane3.setVehicleMaxCap(20);
    plane3.setHours(500);

    cout << "plane 3 stats: " << endl;
    cout << "VN: " << plane3.getVehicleVN() << endl;
    cout << "age: " << plane3.getVehicleAge() << endl;
    cout << "max capacity: " << plane3.getVehicleMaxCap() << endl;
    cout << "hours traveled: " << plane3.getHours() << endl;


    return 0;
}