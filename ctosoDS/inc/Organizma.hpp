#ifndef ORGANIZMA_HPP
#define ORGANIZMA_HPP

#include "Sistem.hpp"
using namespace std;

class Organizma{
    public: 
        Sistem** sistemler;
        int kapasite;
        int uzunluk;
        void reserve();
        Organizma();
        ~Organizma();
        void sistemEkle(Sistem *item);
        void yazdir();
    
};


#endif