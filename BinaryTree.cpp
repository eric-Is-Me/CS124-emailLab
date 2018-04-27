#include "BinaryTree.h"
#include <iostream>
using namespace std;

void BinaryTree::insertNode(Subscriber &sub)
{
    TreeNode *newNode;
    
    newNode = new TreeNode;
    newNode->value = sub;
    newNode->left = newNode->right = nullptr;
    
    insert(root, newNode);
}

void BinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
    if (nodePtr == nullptr)
        nodePtr = newNode;
    else if ((newNode->value).name < (nodePtr->value).name)
        insert(nodePtr->left, newNode);
    else
        insert(nodePtr->right, newNode);
}

void BinaryTree::displayInOrder(TreeNode *nodePtr) const
{
    if (nodePtr)
    {
        displayInOrder(nodePtr->left);
        cout << (nodePtr->value).name << endl;
        displayInOrder(nodePtr->right);
    }
}

bool BinaryTree::searchNode(string name)
{
    TreeNode *nodePtr = root;
    
    while (nodePtr)
    {
        if ((nodePtr->value).name == name)
            return true;
        else if (name < (nodePtr->value).name)
            nodePtr = nodePtr->left;
        else
            nodePtr = nodePtr->right;
    }
    return false;
}
