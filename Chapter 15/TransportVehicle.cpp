#include <vector>
#include <iostream>
#include "TransportVehicle.h"
using namespace std;
using namespace freightcontainer;

namespace transportvehicle{
    TransportVehicle::TransportVehicle() : vehicleVN(0), vehicleAge(0), vehicleMaxCap(0){
    } 

    TransportVehicle::TransportVehicle(int VN, int age, int maxCap) : vehicleVN(VN), vehicleAge(age), vehicleMaxCap(maxCap){}

    int TransportVehicle::getVehicleVN() const{
        return vehicleVN;
    }

    int TransportVehicle::getVehicleAge() const{
        return vehicleAge;
    }
    int TransportVehicle::getVehicleMaxCap() const{
        return vehicleMaxCap;
    }
    void TransportVehicle::setVehicleVN(int VN){
        vehicleVN=VN;
    }
    void TransportVehicle::setVehicleAge(int age){
        vehicleAge=age;
    }
    void TransportVehicle::setVehicleMaxCap(int maxCap){
        vehicleMaxCap=maxCap;
    }

    bool TransportVehicle::addFreightContainer(FreightContainer* fc){
        totalCurrentWeight += fc->getWeight();
        if(totalCurrentWeight > vehicleMaxCap){
            cout << "Vehicle is at its maximum capacity.  A freight container of size ";
            cout << fc->getWeight();
            cout << " is too large.";
            totalCurrentWeight -= fc->getWeight();
            return false;
        }
        freightPtrVector.push_back(fc);
        return true;
    }

}
