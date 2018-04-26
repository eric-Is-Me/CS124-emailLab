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
    void displayPreOrder(TreeNode *) const;
    void displayPostOrder(TreeNode *) const;
    
public:
    BinaryTree()
    { root = nullptr; }
    
    ~BinaryTree()
    {}
    
    void insertNode(Subscriber &);
    bool searchNode(Subscriber &);
    void remove(Subscriber &);
    
    void displayInOrder() const
    { displayInOrder(root); }
    
    void displayPreOrder() const
    { displayPreOrder(root); }
    
    void displayPostOrder() const
    { displayPostOrder(root); }
};

#endif
