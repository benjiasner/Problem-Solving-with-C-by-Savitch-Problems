#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    Node *link;
};

typedef Node* NodePtr;

int main() {

    NodePtr listPtr, tempPtr;

    listPtr = new Node;
    listPtr->name = "Emily";

    tempPtr = new Node; 
    tempPtr->name = "James"; 
    listPtr->link = tempPtr;

    tempPtr->link = new Node; 
    tempPtr = tempPtr->link; 
    tempPtr->name = "Joules"; 
    tempPtr->link = NULL;

    cout << "First let's output the names above: \n";

    tempPtr = listPtr;
    while (tempPtr != NULL){
        cout << tempPtr->name << endl;
        tempPtr = tempPtr->link;
    }

    cout << "Now let's insert the name Josh after James: \n";

    tempPtr = listPtr;
    while (tempPtr != NULL){
        if ( (tempPtr->name) == "James"){
            NodePtr newNode = new Node;
            newNode->link = tempPtr->link;
            newNode->name = "Josh";
            tempPtr->link=newNode;
        }
        tempPtr = tempPtr->link;
    }

    tempPtr = listPtr;
    while (tempPtr != NULL){
        cout << tempPtr->name << endl;
        tempPtr = tempPtr->link;
    }

    cout << "Now let's delete the node Joules: \n";

    tempPtr = listPtr;
    NodePtr prevPtr = nullptr;
    while (tempPtr != NULL){
        if ( (tempPtr->name) == "Joules"){
            if(prevPtr == nullptr){
                listPtr = tempPtr->link;
            }else{
                prevPtr->link = tempPtr->link;
            }
            delete tempPtr;
            break;
        }
        prevPtr = tempPtr;
        tempPtr = tempPtr->link;
    }

    tempPtr = listPtr;
    while (tempPtr != NULL){
        cout << tempPtr->name << endl;
        tempPtr = tempPtr->link;
    }

    tempPtr = listPtr;
    while (tempPtr != NULL) {
        NodePtr next = tempPtr->link;
        delete tempPtr;
        tempPtr = next;
    }

    cout << "And finally let's see if there are any nodes left after the delete: \n";

    tempPtr = listPtr;
    while (tempPtr != NULL){
        cout << tempPtr->name << endl;
        tempPtr = tempPtr->link;
    }

    return 0;
}