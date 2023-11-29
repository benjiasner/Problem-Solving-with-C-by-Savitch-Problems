#include <iostream>
#include "Node1.h"

using namespace std;
using namespace linkedlistofclasses;

void headInsert(NodePtr& head, int theNumber){
    NodePtr tempPtr;
    tempPtr = new Node1(theNumber, head);
    head = tempPtr;
}

int main(){
    NodePtr head, tmp;

    head = new Node1(0, NULL);
    for (int i=1; i < 5; i++){
        headInsert(head, i);
    }
    tmp = head;
    while(tmp != NULL){
        cout << tmp->getData() << endl;
        tmp = tmp->getLink();
    }

    tmp=head;
    while (tmp!=NULL){
        NodePtr nodeToDelete = tmp;
        tmp=tmp->getLink();
        delete nodeToDelete;
    }
    return 0;
}