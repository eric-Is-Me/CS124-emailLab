#include "BinaryTree.h"

void BinaryTree::deleteNode(Subscriber &sub, TreeNode *&nodePtr)
{
    if (sub.name < (nodePtr->value).name)
        deleteNode(sub, nodePtr->left);
    else if (sub.name > (nodePtr->value).name)
        deleteNode(sub, nodePtr->right);
    else
        makeDeletion(nodePtr);
}
