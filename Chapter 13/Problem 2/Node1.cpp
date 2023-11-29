#include <iostream>
#include "Node1.h"

namespace linkedlistofclasses{

    Node1::Node1() : data(0), link(NULL) {
        //intentionally empty
    }

    Node1::Node1(int value, Node1 *next) : data(value), link(next){

    }

    int Node1::getData() const{
        return data;
    }

    Node1* Node1::getLink() const{
        return link;
    }

    void Node1::setData(int value){
        data = value;
    }

    void Node1::setLink(Node1 *next){
        link=next;
    }
}