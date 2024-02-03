#include <iostream>
#include "BangunRuang.h"
#include "Kubus.h"
#include "Balok.h"
#include "Silinder.h"

using namespace std;


int main(int argc, char const *argv[])
{
    Kubus obj1(4); // misalkan kubus dengan panjang rusuk 4
    cout << "area adalah " << obj1.getArea() << endl;
    cout << "volume adalah " << obj1.getVolume() << endl;
    cout << "=========" << endl;
    Balok obj2(6,7,8); // misalkan balok dengan pajang, lebar, tinggi: 6,7,8
    cout << "area adalah " << obj2.getArea() << endl;
    cout << "volume adalah " << obj2.getVolume() << endl;
    cout << "=========" << endl;
    Silinder obj3 (7,10); // misalkan silinder dengan radius: 7 dan tinggi: 8
    cout << "area adalah " << obj3.getArea() << endl;
    cout << "volume adalah " << obj3.getVolume() << endl;

    return 0;
}
