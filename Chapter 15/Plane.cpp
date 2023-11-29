#include "Plane.h"

namespace transportvehicle{
    Plane::Plane() : TransportVehicle(), planeHours(0){} 

    Plane::Plane(int VN, int age, int maxCap, int hours) : TransportVehicle(VN, age, maxCap), planeHours(hours){}

    int Plane::getHours() const{
        return planeHours;
    }

    void Plane::setHours(int hours){
        planeHours=hours;
    }

}
