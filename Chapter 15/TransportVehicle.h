#ifndef TRANSPORTVEHICLE_H
#define TRANSPORTVEHICLE_H

#include <vector>
#include "FreightContainer.h"

namespace transportvehicle{
    class TransportVehicle{
        public:
            TransportVehicle();
            TransportVehicle(int VN, int age, int maxCap);
            int getVehicleVN() const;
            int getVehicleAge() const;
            int getVehicleMaxCap() const;
            void setVehicleVN(int VN);
            void setVehicleAge(int age);
            void setVehicleMaxCap(int maxCap);
            bool addFreightContainer(freightcontainer::FreightContainer* fc);
        private:
            int vehicleVN, vehicleAge, vehicleMaxCap, totalCurrentWeight;
            std::vector<freightcontainer::FreightContainer*> freightPtrVector;
    };

}

#endif