#ifndef __BANGUNRUANG_H
#define __BANGUNRUANG_H

#include <string>
using namespace std;
class BangunRuang{
    public:
        int jumlahSisi;
        int jumlahRusuk;
        string nama;

        // constructor default
        BangunRuang();

        // constructor dengan parameter
        BangunRuang(string inputNama, int inputJumlahRusuk, int inputJumlahSisi);

        // virtual function 
        virtual double getArea() = 0;
        virtual double getVolume() = 0;
        /*virtual function tidak bisa dibuat di luar class*/

        //getter
        int showJumlahSisi();
        int showJumlahRusuk();
        string showName();
};
#endif