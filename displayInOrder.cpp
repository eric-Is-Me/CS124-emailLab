#include "BinaryTree.h"
#include <iostream>
using namespace std;

void BinaryTree::displayInOrder(TreeNode *nodePtr) const
{
    if (nodePtr)
    {
        displayInOrder(nodePtr->left);
        cout << (nodePtr->value).name << endl;
        displayInOrder(nodePtr->right);
    }
}

