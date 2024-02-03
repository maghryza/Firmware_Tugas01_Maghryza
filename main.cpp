#include <iostream>
#include "BangunRuang.cpp"
#include "Kubus.cpp"
#include "Balok.cpp"
#include "Silinder.cpp"

using namespace std;


int main(int argc, char const *argv[])
{
    Kubus obj1(4);
    cout << "area adalah " << obj1.getArea() << endl;
    cout << "volume adalah " << obj1.getVolume() << endl;
    cout << "=========" << endl;
    Balok obj2(6,7,8);
    cout << "area adalah " << obj2.getArea() << endl;
    cout << "volume adalah " << obj2.getVolume() << endl;
    cout << "=========" << endl;
    Silinder obj3 (7,10);
    cout << "area adalah " << obj3.getArea() << endl;
    cout << "volume adalah " << obj3.getVolume() << endl;
    obj1.jumlahSisi = 10;
    cout << "Jumlah sisi obj1 ada " << obj1.showJumlahSisi();


    return 0;
}