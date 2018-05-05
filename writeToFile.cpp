#include "lab.h"
#include "BinaryTree.h"
#include <iostream>
#include <fstream>
using namespace std;

void BinaryTree::writeToFile(TreeNode *nodePtr) const
{
    ofstream outputFile;
    outputFile.open("subscribers.txt", ios::app);

    if (nodePtr)
    {
        writeToFile(nodePtr->left);
        outputFile << (nodePtr->value).name << endl;
        writeToFile(nodePtr->right);
    }
    
    outputFile.close();
}


