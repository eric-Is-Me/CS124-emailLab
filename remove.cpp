#include "BinaryTree.h"

void BinaryTree::remove(Subscriber &sub)
{
    deleteNode(sub, root);
}

