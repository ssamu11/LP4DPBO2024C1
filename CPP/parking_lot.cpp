#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "vehicle.cpp"

class ParkingLot {
private:
    int _kapasitas;
    int _jumlah_kendaraan_saat_ini;

public:
    ParkingLot(int kapasitas = 0);
    
    int getKapasitas();
    int getJumlahKendaraanSaatIni();
    
    void tambahKendaraan();
};

ParkingLot::ParkingLot(int kapasitas)
    : _kapasitas(kapasitas), _jumlah_kendaraan_saat_ini(0) {}

int ParkingLot::getKapasitas() {
    return _kapasitas;
}

int ParkingLot::getJumlahKendaraanSaatIni() {
    return _jumlah_kendaraan_saat_ini;
}

void ParkingLot::tambahKendaraan() {
    if (_jumlah_kendaraan_saat_ini < _kapasitas) {
        _jumlah_kendaraan_saat_ini++;
    } else {
        std::cout << "Tempat parkir penuh." << std::endl;
    }
}
