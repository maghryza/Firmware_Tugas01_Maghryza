//implementasi dari header Silinder.h
#include "Silinder.h"

// default consturctor
Silinder::Silinder(){
}

// consturctor with parameter
Silinder::Silinder(double inputRadius, double inputTinggi){
    radius = inputRadius;
    tinggi = inputTinggi;
}

// override function from virtual base function
double Silinder::getArea(){
    return 2*pi*radius*tinggi+2*pi*radius*radius;
}
double Silinder::getVolume(){
    return pi*radius*radius*tinggi;
}