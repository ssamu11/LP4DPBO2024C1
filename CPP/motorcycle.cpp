#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "vehicle.cpp"

class Motorcycle : public Vehicle {
private:
    std::string _jenis_motor;
    std::string _kapasitas_tangki;

public:
    Motorcycle(std::string plat_nomor = "", std::string merk = "", int tahun_produksi = 0, std::string warna = "", std::string jenis_motor = "", std::string kapasitas_tangki = "");
    
    std::string getJenisMotor();
    std::string getKapasitasTangki();
    
    std::string displayInfo();
};

Motorcycle::Motorcycle(std::string plat_nomor, std::string merk, int tahun_produksi, std::string warna, std::string jenis_motor, std::string kapasitas_tangki)
    : Vehicle(plat_nomor, merk, tahun_produksi, warna), _jenis_motor(jenis_motor), _kapasitas_tangki(kapasitas_tangki) {}

std::string Motorcycle::getJenisMotor() {
    return _jenis_motor;
}

std::string Motorcycle::getKapasitasTangki() {
    return _kapasitas_tangki;
}

std::string Motorcycle::displayInfo() {
    return Vehicle::displayInfo() + ", Jenis Motor: " + _jenis_motor + ", Kapasitas Tangki: " + _kapasitas_tangki;
}
