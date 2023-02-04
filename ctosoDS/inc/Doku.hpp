#ifndef DOKU_HPP
#define DOKU_HPP

#include "Hucre.hpp"
#include "Radix.hpp"

class Doku
{
public:
    Hucre **hucreler;
    int hucreSayisi;

    int ortaSayi;
    Doku(int *sayilar, int ortaSayi, int hucreSayisi);
    void yarila();
    void guncelle();
    ~Doku();
};

#endif
