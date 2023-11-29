#ifndef FREIGHTCONTAINER_H
#define FREIGHTCONTAINER_H

namespace freightcontainer{
    class FreightContainer{
        public:
            FreightContainer();
            FreightContainer(int ID, int weight);
            int getID() const;
            int getWeight() const;
            void setID(int ID);
            void setWeight(int weight);
        private:
            int cargoID, cargoWeight;
    };

}

#endif