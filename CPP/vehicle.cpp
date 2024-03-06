#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "vehicle.cpp"

class Vehicle {
private:
    std::string _plat_nomor;
    std::string _merk;
    int _tahun_produksi;
    std::string _warna;

public:
    Vehicle(std::string plat_nomor = "", std::string merk = "", int tahun_produksi = 0, std::string warna = "");
    
    std::string getPlatNomor();
    std::string getMerk();
    int getTahunProduksi();
    std::string getWarna();
    
    std::string displayInfo();
};

Vehicle::Vehicle(std::string plat_nomor, std::string merk, int tahun_produksi, std::string warna)
    : _plat_nomor(plat_nomor), _merk(merk), _tahun_produksi(tahun_produksi), _warna(warna) {}

std::string Vehicle::getPlatNomor() {
    return _plat_nomor;
}

std::string Vehicle::getMerk() {
    return _merk;
}

int Vehicle::getTahunProduksi() {
    return _tahun_produksi;
}

std::string Vehicle::getWarna() {
    return _warna;
}

std::string Vehicle::displayInfo() {
    return "Plat Nomor: " + _plat_nomor + ", Merk: " + _merk + ", Tahun Produksi: " + std::to_string(_tahun_produksi) + ", Warna: " + _warna;
}
