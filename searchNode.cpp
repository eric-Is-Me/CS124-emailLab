#include "BinaryTree.h"

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
