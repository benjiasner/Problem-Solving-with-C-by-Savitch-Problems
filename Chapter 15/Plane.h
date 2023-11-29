#ifndef PLANE_H
#define PLANE_H

#include <vector>
#include "TransportVehicle.h"

namespace transportvehicle{
    class Plane: public TransportVehicle{
        public:
            Plane();
            Plane(int VN, int age, int maxCap, int hours);
            int getHours() const;
            void setHours(int kilometers);
        private:
            int planeHours;
    };

}

#endif