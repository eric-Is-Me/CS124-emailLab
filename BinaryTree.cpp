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

void BinaryTree::remove(Subscriber &sub)
{
    deleteNode(sub, root);
}

void BinaryTree::deleteNode(Subscriber &sub, TreeNode *&nodePtr)
{
    if (sub.name < (nodePtr->value).name)
        deleteNode(sub, nodePtr->left);
    else if (sub.name > (nodePtr->value).name)
        deleteNode(sub, nodePtr->right);
    else
        makeDeletion(nodePtr);
}

void BinaryTree::makeDeletion(TreeNode *&nodePtr)
{
    TreeNode *tempNodePtr;
    
    if (nodePtr == nullptr)
        cout << "Cannot delete empty node.\n";
    else if (nodePtr->right == nullptr)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->left;
        delete tempNodePtr;
    }
    else if (nodePtr->left == nullptr)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->right;
        delete tempNodePtr;
    }
    else
    {
        tempNodePtr = nodePtr->right;
        while (tempNodePtr->left)
            tempNodePtr = tempNodePtr->left;
        tempNodePtr->left = nodePtr->left;
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->right;
        delete tempNodePtr;
    }
}
