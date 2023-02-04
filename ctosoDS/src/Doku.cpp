/**
* @file Doku.cpp
* @description hucre nesnelerini tutan doku sinifi
* @course 2.ogretim A
* @assignment 2
* @date 23.12.2022
* @author mehmetOk mehmet.ok1@ogr.sakarya.edu.tr
*/

#include "Doku.hpp"
#include "Radix.hpp"

Doku::Doku(int *sayilar,int ortaSayi, int hucreSayisi){
    this->hucreSayisi = hucreSayisi;
    hucreler = new Hucre*[hucreSayisi];
    for (size_t i = 0; i < hucreSayisi; i++)
    {
        hucreler[i] = new Hucre(sayilar[i]);
    }
    this->ortaSayi = ortaSayi;
}

void Doku::yarila(){

    for (size_t i = 0; i < hucreSayisi; i++)
    {
        if(hucreler[i]->dnaUzunluk%2==0)
            hucreler[i]->dnaUzunluk = hucreler[i]->dnaUzunluk/2;
    }
    
}

void Doku::guncelle(){
    int* sayilar = new int[hucreSayisi];
    for (size_t i = 0; i < hucreSayisi; i++)
    {
        sayilar[i] = hucreler[i]->dnaUzunluk;
    }

    Radix *rx = new Radix(sayilar,hucreSayisi);
    int *sirali = rx->sort();
    this->ortaSayi = sirali[(hucreSayisi-1)/2];
    delete rx;
    delete sirali;
    delete sayilar;
    
}

Doku::~Doku(){
    
    for (size_t i = 0; i < this->hucreSayisi; i++)
    {
        delete hucreler[i];
    }
    delete [] hucreler;
}


