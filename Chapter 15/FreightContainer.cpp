#include "FreightContainer.h"

namespace freightcontainer{
    FreightContainer::FreightContainer() : cargoID(0), cargoWeight(0){

    }

    FreightContainer::FreightContainer(int ID, int weight) : cargoID(ID), cargoWeight(weight){

    }

    int FreightContainer::getID() const{
        return cargoID;
    }

    int FreightContainer::getWeight() const{
        return cargoWeight;
    }

    void FreightContainer::setID(int ID){
        cargoID = ID;
    }

    void FreightContainer::setWeight(int weight){
        cargoWeight = weight;
    }


}
