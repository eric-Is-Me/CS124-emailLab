bool newUser(treenode* &root, const string data){
    if(!root){                              //Base case if tree is empty
        treenode *newnode = new treenode;   //Allocate new node
        if (!newnode){                      //If new node can't be made then mem is full
            return false;
        }
        
        newnode->data = data;               //Initialize the new node's members
        newnode->left = 0;
        newnode->right = 0;
        root = newnode;
        return true;
    }
    
    string str1 = data;
    string str2 = root->data;
    int comp = str1.compare(str2);          //Using built in cpp compare to compare data
    if (comp == 0){
        fl_message("User already exists.");
    }
    else if (comp < 0){
        return newUser(root->left, data);
    }
    else{
        return newUser(root->right, data);
    }
}
