#ifndef __KUBUS_H
#define __KUBUS_H

#include "BangunRuang.h"

class Kubus: public BangunRuang{
    private:
        double panjangRusuk;
    
    public:
        // default consturctor
        Kubus();

        // constructor dengan parameter
        Kubus(double inputPanjangRusuk);

        // override function from virtual base function
        double getArea() override;
        double getVolume() override;

};

#endif