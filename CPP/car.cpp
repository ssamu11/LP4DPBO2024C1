#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "vehicle.cpp"

class Car {
private:
    std::string _plat_nomor;
    std::string _merk;
    int _tahun_produksi;
    std::string _warna;
    int _jumlah_kursi;
    int _jumlah_pintu;

public:
    Car(std::string plat_nomor = "", std::string merk = "", int tahun_produksi = 0, std::string warna = "", int jumlah_kursi = 0, int jumlah_pintu = 0);
    
    std::string getPlatNomor();
    std::string getMerk();
    int getTahunProduksi();
    std::string getWarna();
    int getJumlahKursi();
    int getJumlahPintu();
    
    std::string displayInfo();
};

Car::Car(std::string plat_nomor, std::string merk, int tahun_produksi, std::string warna, int jumlah_kursi, int jumlah_pintu)
    : _plat_nomor(plat_nomor), _merk(merk), _tahun_produksi(tahun_produksi), _warna(warna), _jumlah_kursi(jumlah_kursi), _jumlah_pintu(jumlah_pintu) {}

std::string Car::getPlatNomor() {
    return _plat_nomor;
}

std::string Car::getMerk() {
    return _merk;
}

int Car::getTahunProduksi() {
    return _tahun_produksi;
}

std::string Car::getWarna() {
    return _warna;
}

int Car::getJumlahKursi() {
    return _jumlah_kursi;
}

int Car::getJumlahPintu() {
    return _jumlah_pintu;
}

std::string Car::displayInfo() {
    return "Plat Nomor: " + _plat_nomor + ", Merk: " + _merk + ", Tahun Produksi: " + std::to_string(_tahun_produksi) + ", Warna: " + _warna + ", Jumlah Kursi: " + std::to_string(_jumlah_kursi) + ", Jumlah Pintu: " + std::to_string(_jumlah_pintu);
}
