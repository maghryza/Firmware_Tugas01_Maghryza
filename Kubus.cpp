//implementasi dari header Kubus.h
#include "Kubus.h"

// default consturctor
Kubus::Kubus(){
}

// consturctor with parameter
Kubus::Kubus(double inputPanjangRusuk){
    panjangRusuk = inputPanjangRusuk;
}

// override function from virtual base function
double Kubus::getArea() {
    return 6*panjangRusuk*panjangRusuk;
}
double Kubus::getVolume(){
    return panjangRusuk*panjangRusuk*panjangRusuk;
}