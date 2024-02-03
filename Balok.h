#ifndef __BALOK_H
#define __BALOK_H

#include "BangunRuang.h"
class Balok : public BangunRuang{
    private:
        double panjang;
        double lebar;
        double tinggi;
        
    
    public:
        // default constructor
        Balok();

        // constructor dengan parameter
        Balok(double inputPanjang, double inputLebar, double inputTinggi);

        // override function from virtual base function
        double getArea() override;
        double getVolume() override;

};
#endif