#ifndef SISTEM_HPP
#define SISTEM_HPP

#include "Organ.hpp"

class Sistem{
    public:
        Organ **organlar;
        int kapasite;
        int uzunluk;

    
        Sistem();
        ~Sistem();
        void organEkle(Organ *organ);
        void yazdir();
};

#endif