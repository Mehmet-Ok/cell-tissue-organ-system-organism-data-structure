/**
* @file Organizma.cpp
* @description sistem nesnelerini tutan sinif
* @course 2.ogretim A
* @assignment 2
* @date 23.12.2022
* @author mehmetOk mehmet.ok1@ogr.sakarya.edu.tr
*/

#include "Organizma.hpp"

Organizma::Organizma(){
    kapasite = 10;
    uzunluk = 0;
    sistemler = new Sistem*[kapasite];
}

void Organizma::sistemEkle(Sistem *item){
    if(uzunluk >= kapasite) reserve();
    sistemler[uzunluk] = item;
    uzunluk++;
}

void Organizma::reserve(){
    int newCap = kapasite+5;

    if(kapasite >= newCap) return;

    Sistem **temp = new Sistem*[newCap];
    for (size_t i = 0; i < uzunluk; i++)
    {
        temp[i] = sistemler[i];
    }
    kapasite = newCap; 
    delete [] sistemler;
    sistemler = temp;
}

void Organizma::yazdir(){
    for (size_t i = 0; i < uzunluk-1; i++)
    {
        sistemler[i]->yazdir();
        cout<<endl;
    }   
}

Organizma::~Organizma(){
    // for (size_t i = 0; i < uzunluk; i++)
    // {
    //     delete sistemler[i];
    // }
    // delete [] sistemler;
}