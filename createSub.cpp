#include "lab.h"
#include "BinaryTree.h"
void createSub(string name, string password, Subscriber &sub, BinaryTree &tree){
    sub.name = name;
    sub.password = password;
    
    tree.insertNode(sub);
}
