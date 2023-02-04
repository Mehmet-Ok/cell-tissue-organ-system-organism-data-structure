/**
* @file Kontrol.cpp
* @description mutasyonu kontrol eden sinif
* @course 2.ogretim A
* @assignment 2
* @date 23.12.2022
* @author mehmetOk mehmet.ok1@ogr.sakarya.edu.tr
*/

#include "Kontrol.hpp"

Kontrol::Kontrol() {}

void Kontrol::mutasyon(Organizma *organizma)
{
    for (size_t i = 0; i < organizma->uzunluk - 1; i++)
    {
        for (size_t j = 0; j < 100; j++)
        {
            if (organizma->sistemler[i]->organlar[j]->dokular->mutasyonVarMi())
            {
                organizma->sistemler[i]->organlar[j]->dokular->degerYarila(organizma->sistemler[i]->organlar[j]->dokular->root);
                organizma->sistemler[i]->organlar[j]->dokular->guncelle(organizma->sistemler[i]->organlar[j]->dokular->root);
                Doku **yeni = new Doku *[20];
                int index = 0;
                organizma->sistemler[i]->organlar[j]->dokular->BSTtoArray(organizma->sistemler[i]->organlar[j]->dokular->root, yeni, index);
                for (size_t i = 0; i < 20; i++)
                {
                    yeni[i] = NULL;
                }
                organizma->sistemler[i]->organlar[j]->dokular->nullVer(organizma->sistemler[i]->organlar[j]->dokular->root);
            }
        }
    }
}

Kontrol::~Kontrol(){
    
}