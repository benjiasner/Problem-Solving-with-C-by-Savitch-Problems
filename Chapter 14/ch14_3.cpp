#include <iostream>
#include "BinaryTree.h"

using namespace std;
using namespace binarytree;

void insertData(NodePtr& head, int value){
    if (head->getData()==0 && head->getRight() == NULL && head->getLeft()==NULL){
        //creating root node if no initial node exists
        cout << "Creating node \n";
        head->setData(value);
    } else if (head->getData() > value){
        //we want to cycle thru the nodes until we find the last one, then we'll insert:
        NodePtr tmp = head;
        while (tmp != NULL){
            cout << "current left node: \n";
            cout << tmp->getData();
            cout << "\n";

            if (tmp->getLeft() == NULL){
            NodePtr tempPtr;
            tempPtr = new TreeNode(value, NULL, NULL);
            tmp->setLeft(tempPtr);
            cout << "setting left node: \n";
            cout << tempPtr->getData();
            cout << "\n";
            break;
            }
            tmp=tmp->getLeft();
        }
        
    } else { //head-getdata() < value
        NodePtr tmp = head;
        while (tmp != NULL){
            cout << "current right node: \n";
            cout << tmp->getData();
            cout << "\n";

            if (tmp->getRight() == NULL){
            NodePtr tempPtr;
            tempPtr = new TreeNode(value, NULL, NULL);
            tmp->setRight(tempPtr);
            cout << "setting right node: \n";
            cout << tempPtr->getData();
            cout << "\n";
            break;
            }
            tmp=tmp->getRight();
        }
    }
}

void displayTreeInOrder(NodePtr head) {
    if (head != NULL) {
        displayTreeInOrder(head->getLeft());
        cout << head->getData() << " ";
        displayTreeInOrder(head->getRight());
    }
}

void displayLeftNodesInOrder(NodePtr head) {
    if (head != NULL){
        displayLeftNodesInOrder(head->getLeft());
        cout << head->getData()<< " ";
    }
}

void displayRightNodesInOrder(NodePtr head) {
    if (head != NULL){
        displayRightNodesInOrder(head->getRight());
        cout << head->getData()<< " ";
    }
}

int main(){
    NodePtr head, tmp;

    //here we'll test the TreeNode class and the insertData function


    head = new TreeNode();
    insertData(head, 10);
    insertData(head, 20);
    insertData(head, 5);
    insertData(head, 40);
    insertData(head, 2);
    insertData(head, 100);
    insertData(head, 9);

    cout << "Binary Tree In-Order Traversal:" << endl;
    displayTreeInOrder(head);
    cout << endl;

    cout << "Binary Tree Left in order: " << endl;
    displayLeftNodesInOrder(head);
    cout << endl;

    cout << "Binary Tree Right in order: " << endl;
    displayRightNodesInOrder(head);
    cout << endl;

    return 0;
}

