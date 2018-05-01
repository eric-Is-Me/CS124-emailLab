#include "BinaryTree.h"

void BinaryTree::insertNode(Subscriber &sub)
{
    TreeNode *newNode;
    
    newNode = new TreeNode;
    newNode->value = sub;
    newNode->left = newNode->right = nullptr;
    
    insert(root, newNode);
}
