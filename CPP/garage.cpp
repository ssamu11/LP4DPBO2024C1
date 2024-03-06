#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "vehicle.cpp" 

class Garage {
private:
    std::string _nama_garasi;
    int _luas_garasi;
    std::vector<Vehicle*> _daftar_kendaraan;

public:
    Garage(std::string nama_garasi = "", int luas_garasi = 0);
    
    std::string getNamaGarasi();
    int getLuasGarasi();
    
    void tambahKendaraan(Vehicle* kendaraan); 
    void tampilkanInfoKendaraan();
};

Garage::Garage(std::string nama_garasi, int luas_garasi)
    : _nama_garasi(nama_garasi), _luas_garasi(luas_garasi) {}

std::string Garage::getNamaGarasi() {
    return _nama_garasi;
}

int Garage::getLuasGarasi() {
    return _luas_garasi;
}

void Garage::tambahKendaraan(Vehicle* kendaraan) { 
    _daftar_kendaraan.push_back(kendaraan);
}

void Garage::tampilkanInfoKendaraan() {
    std::cout << "Info Kendaraan di garasi " << _nama_garasi << ":\n";
    for (Vehicle* kendaraan : _daftar_kendaraan) {
        std::cout << kendaraan->displayInfo() << std::endl;
    }
}
