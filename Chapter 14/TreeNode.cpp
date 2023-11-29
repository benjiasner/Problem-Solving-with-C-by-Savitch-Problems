#include <iostream>
#include "BinaryTree.h"

namespace binarytree{

    TreeNode::TreeNode() : data(0), right(NULL), left(NULL) {
        //intentionally empty
    }

    TreeNode::TreeNode(int value, TreeNode *right, TreeNode *left) : data(value), right(right), left(left){

    }

    TreeNode::~TreeNode(){
        
    }

    int TreeNode::getData() const{
        return data;
    }

    TreeNode* TreeNode::getLeft() const{
        return left;
    }

    TreeNode* TreeNode::getRight() const{
        return right;
    }

    void TreeNode::setData(int value){
        data = value;
    }

    void TreeNode::setRight(TreeNode *setNode){
        right=setNode;
    }

    void TreeNode::setLeft(TreeNode *setNode){
        left=setNode;
    }
}