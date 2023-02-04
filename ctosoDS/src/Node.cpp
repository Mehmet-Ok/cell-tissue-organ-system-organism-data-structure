/**
* @file Node.cpp
* @description ikili arama agacinin dugum sinifi
* @course 2.ogretim A
* @assignment 2
* @date 23.12.2022
* @author mehmetOk mehmet.ok1@ogr.sakarya.edu.tr
*/

#include "Node.hpp"

Node::Node(Doku *veri){
    this->veri = veri;
    this->left = NULL;
    this->right = NULL;
}   

Node::~Node(){
    delete veri;
}