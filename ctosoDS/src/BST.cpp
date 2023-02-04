/**
* @file BST.cpp
* @description ikili arama agaci
* @course 2.ogretim A
* @assignment 2
* @date 23.12.2022
* @author mehmetOk mehmet.ok1@ogr.sakarya.edu.tr
*/


#include "BST.hpp"

BST::BST()
{
    root = NULL;
}

void BST::insert(Node *&root, Doku *item)
{
    if (root == NULL)
        root = new Node(item);
    else
    {
        if (item->ortaSayi <= root->veri->ortaSayi)
        {
            insert(root->left, item);
        }
        else
        {
            insert(root->right, item);
        }
    }
}

void BST::preorder(Node *root)
{

    if (root != NULL)
    {
        cout << root->veri->ortaSayi << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void BST::Preorder()
{
    preorder(this->root);
}

void BST::postorder(Node *rt)
{
    if (rt == NULL)
        return;
    postorder(rt->left);
    postorder(rt->right);
    cout << rt->veri->ortaSayi << " ";
}

int BST::isBalanced(Node *rt)
{
    if (rt == NULL)
        return 0;

    int lh = isBalanced(rt->left);
    if (lh == -1)
        return -1;

    int rh = isBalanced(rt->right);
    if (rh == -1)
        return -1;

    if (abs(lh - rh) > 1)
        return -1;
    else
        return max(lh, rh) + 1;
}

void BST::degerYarila(Node *rt)
{
    if (rt == NULL)
        return;
    degerYarila(rt->left);
    degerYarila(rt->right);
    rt->veri->yarila();
}

void BST::BSTtoArray(Node *root, Doku **hedef, int &index)
{
    if (root == NULL)
        return;
    BSTtoArray(root->left, hedef, index);
    BSTtoArray(root->right, hedef, index);
    hedef[index++] = root->veri;
}

void BST::nullVer(Node *&rt)
{

    if (rt == NULL)
        return;
    nullVer(rt->left);
    nullVer(rt->right);
    rt = NULL;
}

bool BST::mutasyonVarMi()
{
    if (this->root->veri->ortaSayi % 50 == 0)
        return true;
    return false;
}

void BST::guncelle(Node* rt){
    if (rt == NULL)
        return;
    guncelle(rt->left);
    guncelle(rt->right);
    rt->veri->guncelle();
}

void BST::clear(Node *rt){
    if (rt == NULL)
        return;
    nullVer(rt->left);
    nullVer(rt->right);
    delete rt->veri;
    delete rt;
}

BST::~BST(){
    clear(this->root);
}
