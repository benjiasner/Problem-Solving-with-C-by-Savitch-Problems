#ifndef TRUCK_H
#define TRUCK_H

#include <vector>
#include "TransportVehicle.h"

namespace transportvehicle{
    class Truck: public TransportVehicle{
        public:
            Truck();
            Truck(int VN, int age, int maxCap, int kilometers);
            int getKilometers() const;
            void setKilometers(int kilometers);
        private:
            int truckKilometers;
    };

}

#endif