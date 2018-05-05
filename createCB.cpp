#include "lab.h"
#include "Subscriber.h"

void createCB(Fl_Widget*){
    Subscriber sub;
    BinaryTree tree;
    
    string name = nameIn->value();
    string password = passwordIn->value();

    createSub(name, password, sub, tree);
}
