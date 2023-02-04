/**
* @file Test.cpp
* @description test kodlari
* @course 2.ogretim A
* @assignment 2
* @date 23.12.2022
* @author mehmetOk mehmet.ok1@ogr.sakarya.edu.tr
*/

#include "Organizma.hpp"
#include "Radix.hpp"
#include "BST.hpp"
#include "Kontrol.hpp"
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    system("cls");
    string line;
    bool kontrol = false;
    bool kontrol2 = false;
    int sayacYirmi = 0;
    int sayacHucre = 1;
    int sayacOrgan = 0;
    int sayacSayi, sayi;
    Organizma *organiz = new Organizma();

    fstream file("veri.txt", ios::in);
    if (file.is_open())
    {
        while (true)
        {
            if (kontrol)
                break;
            Sistem *sist = new Sistem();
            while (sayacOrgan < 100)
            {
                if (kontrol)
                    break;
                BST *agac = new BST();
                while (sayacYirmi < 20)
                {
                    if (!getline(file, line))
                    {
                        kontrol = true;
                        break;
                    }
                    for (size_t i = 0; i < line.length(); i++)
                    {
                        if (line[i] == ' ')
                            sayacHucre++;
                    }
                    stringstream ss(line);
                    int *sayilar = new int[sayacHucre];
                    sayacSayi = 0;
                    while (ss >> sayi)
                    {
                        sayilar[sayacSayi] = sayi;
                        sayacSayi++;
                    }
                    Radix *rx = new Radix(sayilar, sayacHucre);
                    int *sirali = rx->sort();
                    Doku *yeni = new Doku(sayilar, sirali[(sayacHucre - 1) / 2], sayacHucre);
                    agac->insert(agac->root, yeni);
                    sayacHucre = 1;
                    sayacYirmi++;
                    delete rx;
                    delete[] sayilar;
                    delete[] sirali;
                }
                Organ *org = new Organ(agac);
                sist->organEkle(org);
                sayacOrgan++;
                sayacYirmi = 0;
            }
            sayacOrgan = 0;
            organiz->sistemEkle(sist);
        }
    }
    file.close();

    cout<<setw(40)<<"ORGANIZMA"<<endl;
    organiz->yazdir();
    system("pause");
    system("cls");
    Kontrol *k = new Kontrol();
    k->mutasyon(organiz);
    cout<<setw(40)<<"ORGANIZMA(MUTASYONA UGRADI)"<<endl;
    organiz->yazdir();

    delete k;
    delete organiz;
    return 0;
}