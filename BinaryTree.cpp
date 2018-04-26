#include "BinaryTree.h"

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

