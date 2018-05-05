#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "Subscriber.h" // includes #include <string>

class BinaryTree
{
private:
    struct TreeNode
    {
        Subscriber value;
        TreeNode *left;
        TreeNode *right;
    };
    
    TreeNode *root;
    
    void insert(TreeNode *&, TreeNode *&);
    void displayInOrder(TreeNode *) const;
    void writeTofile(TreeNode *) const;     // writes subscriber binary tree to a file subscribers.txt
    
    void deleteNode(Subscriber &, TreeNode *&);
    void makeDeletion(TreeNode *&);
    
public:
    BinaryTree()
    { root = nullptr; }
    
    ~BinaryTree()
    {}
    
    void insertNode(Subscriber &);
    bool searchNode(string);
    void remove(Subscriber &);
    
    void displayInOrder() const
    { displayInOrder(root); }
};
#endif
