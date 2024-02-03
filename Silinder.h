#ifndef __SILINDER_H
#define __SILINDER_H

#include "BangunRuang.h"
class Silinder : public BangunRuang{
    private:
        double radius;
        double tinggi;
        const double pi = 3.14;

    public:
        // default constructor 
        Silinder();

        // constructor dengan parameter
        Silinder(double inputRadius, double inputTinggi);

        // override function from virtual base function
        double getArea() override;
        double getVolume() override;

};
#endif