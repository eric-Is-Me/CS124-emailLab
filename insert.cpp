#include "BinaryTree.h"

void BinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
    if (nodePtr == nullptr)
        nodePtr = newNode;
    else if ((newNode->value).name < (nodePtr->value).name)
        insert(nodePtr->left, newNode);
    else
        insert(nodePtr->right, newNode);
}
