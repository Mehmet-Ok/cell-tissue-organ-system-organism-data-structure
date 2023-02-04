/**
* @file Sistem.cpp
* @description organlari tutan sistem sinifi
* @course 2.ogretim A
* @assignment 2
* @date 23.12.2022
* @author mehmetOk mehmet.ok1@ogr.sakarya.edu.tr
*/

#include "Sistem.hpp"

Sistem::Sistem(){
    kapasite = 100;
    uzunluk = 0;
    organlar = new Organ*[kapasite];
}

void Sistem::organEkle(Organ *organ){
    organlar[uzunluk] = organ;
   // organlar[uzunluk]->dokular->Preorder();
    uzunluk++;
}
void Sistem::yazdir(){
    for (size_t i = 0; i < uzunluk; i++)
    {
        if(organlar[i]->dokular->isBalanced(organlar[i]->dokular->root)>0)
            cout<<" ";
        else    
            cout<<"#";
    }
}

Sistem::~Sistem(){
    for (size_t i = 0; i < uzunluk; i++)
    {
        delete organlar[i];
    }
    delete [] organlar;
}