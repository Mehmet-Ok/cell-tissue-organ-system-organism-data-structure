/**
* @file Organ.cpp
* @description doku nesnelerini ikili arama agacinda tutan sinif
* @course 2.ogretim A
* @assignment 2
* @date 23.12.2022
* @author mehmetOk mehmet.ok1@ogr.sakarya.edu.tr
*/

#include "Organ.hpp"

Organ::Organ(BST *agac){
    dokular = agac;
}

Organ::~Organ(){
    delete dokular;
}

