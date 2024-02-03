//implementasi dari header BangunRuang.h
#include "BangunRuang.h"

// default constructor
BangunRuang::BangunRuang(){
}

// constructor with parameter
BangunRuang::BangunRuang(string inputNama, int inputJumlahRusuk, int inputJumlahSisi){
    BangunRuang::nama = inputNama;
    BangunRuang::jumlahRusuk = inputJumlahRusuk;
    BangunRuang::jumlahSisi = inputJumlahSisi;
}
// getter
int BangunRuang::showJumlahSisi(){
    return jumlahSisi;
}
int BangunRuang::showJumlahRusuk(){
    return jumlahRusuk;
}
string BangunRuang::showName(){
    return nama;
}
