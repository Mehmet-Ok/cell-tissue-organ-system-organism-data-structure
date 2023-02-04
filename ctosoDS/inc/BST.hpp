#ifndef BST_HPP
#define BST_HPP


#include "Node.hpp"
using namespace std;

class BST{
    public: 
        Node *root;

        BST();
        void insert(Node*& root,Doku *item);
        void Preorder();
        void postorder(Node* rt);
        int isBalanced(Node* rt);
        void degerYarila(Node* rt);
        void BSTtoArray(Node *root, Doku** hedef,int& index);
        void nullVer(Node*& rt);
        bool mutasyonVarMi();
        void guncelle(Node* rt);
        void clear(Node* rt);
        ~BST();
    private:
        void preorder(Node* root);
        
};

#endif