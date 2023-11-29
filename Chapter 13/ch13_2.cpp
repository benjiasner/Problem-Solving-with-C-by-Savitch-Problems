#include <iostream>
#include "Node.h"

using namespace std;
using namespace linkedlistofclasses;

void headInsert(NodePtr& head, int theNumber){
    NodePtr tempPtr;
    tempPtr = new Node(theNumber, head);
    head = tempPtr;
}

int main(){
    NodePtr head, tmp;

    head = new Node(0, NULL);
    for (int i=1; i < 5; i++){
        headInsert(head, i);
    }
    tmp = head;
    while(tmp != NULL){
        cout << tmp->getData() << endl;
        tmp = tmp->getLink();
    }

    return 0;
}