//implementasi dari header Balok.h
#include "Balok.h"

// default constructor
Balok::Balok(){

}
// constructor with parameter
Balok::Balok(double inputPanjang, double inputLebar, double inputTinggi){
    panjang = inputPanjang;
    lebar = inputLebar;
    tinggi = inputTinggi;
}

double Balok::getArea(){
    return 2*(panjang*lebar+panjang*tinggi+lebar*tinggi);
}

double Balok::getVolume(){
    return panjang*lebar*tinggi;
}