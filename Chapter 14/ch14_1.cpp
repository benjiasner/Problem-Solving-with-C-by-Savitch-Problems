#include <iostream>
#include "Node.h"

using namespace std;
using namespace linkedlistofclasses;

void headInsert(NodePtr& head, int theNumber){
    NodePtr tempPtr;
    tempPtr = new Node(theNumber, head);
    head = tempPtr;
}

void reverseLinkedList(NodePtr& head){
    NodePtr prev = nullptr;
    NodePtr current = head;
    NodePtr nextNode = nullptr;
    //lets think through what we'll need as arguments
    //I think we'll just need the head node
    //then we'll just create a new thing
    while(current != nullptr){
        nextNode = current->getLink();
        current->setLink(prev);

        prev=current;
        current = nextNode;

    }
    head = prev;
}

int linkedListLength(NodePtr& head){
    NodePtr tmp = head;
    int counter=0;
    while(tmp != NULL){
        counter++;
        tmp=tmp->getLink();
    }
    return counter;
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

    reverseLinkedList(head);

    tmp = head;
    while(tmp != NULL){
        cout << tmp->getData() << endl;
        tmp = tmp->getLink();
    }

    cout << "The length of this linked list is: ";
    cout << linkedListLength(head);

    return 0;
}

