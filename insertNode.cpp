#include "BinaryTree.h"
#include "lab.h"

void BinaryTree::insertNode(Subscriber &sub)
{
    TreeNode *newNode;
    
    newNode = new TreeNode;
    newNode->value = sub;
    newNode->left = newNode->right = nullptr;
    
    insert(root, newNode);
    fl_message("You've successfully created a new subscriber!");
}
