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
    
    cout << "Enter the subscriber you would like to search: ";
    cin >> searchItem;
    
    if (tree.searchNode(searchItem))
        cout << "You found " << searchItem << "!\n";
    else
        cout << searchItem << " isn't here...\n";
    
    return 0;
}
