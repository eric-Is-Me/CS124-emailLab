#include "lab.h"
treenode *find(treenode *root, const string data){
    if(!root){
        return 0;
    }
    
    string str1 = data;                     //Using built in cpp compare function
    string str2 = root->data;               //to compare data. Returns negative 
    int comp = str1.compare(str2);          //if less, positive if more, equal if same
    
    if(comp == 0){
        return root;
    }
    else if(comp < 0){                      //Binary search tree traversal
        return Find(root->left, data);
    }
    else{
        return Find(root->right, data);
    }
}
