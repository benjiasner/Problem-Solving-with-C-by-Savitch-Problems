#include "Truck.h"

namespace transportvehicle{
    Truck::Truck() : TransportVehicle(), truckKilometers(0){} 

    Truck::Truck(int VN, int age, int maxCap, int kilometers) : TransportVehicle(VN, age, maxCap), truckKilometers(kilometers){}

    int Truck::getKilometers() const{
        return truckKilometers;
    }

    void Truck::setKilometers(int kilometers){
        truckKilometers=kilometers;
    }

}
