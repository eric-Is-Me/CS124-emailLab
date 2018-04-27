#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{
    Subscriber eric;
    Subscriber humza;
    Subscriber natasha;
    Subscriber joseph;
    Subscriber mark;
    string searchItem;
    
    mark.name = "Mark";
    joseph.name = "Joseph";
    eric.name = "Eric";
    humza.name = "Humza";
    natasha.name = "Natasha";
    
    BinaryTree tree;
    
    tree.insertNode(mark);
    tree.insertNode(joseph);
    tree.insertNode(eric);
    tree.insertNode(humza);
    tree.insertNode(natasha);
    
    tree.displayInOrder();
    
    cout << "Deleting Joseph...\n";
    tree.remove(eric);
    tree.remove(mark);
    
    tree.displayInOrder();
    
    return 0;
}
