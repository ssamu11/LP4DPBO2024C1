#include "car.cpp"
#include "garage.cpp"
#include "motorcycle.cpp"
#include "parking_lot.cpp"

int main() {
    Car car1("B 1234 AB", "Toyota", 2018, "Merah", 5, 4);
    Car car2("B 5678 CD", "Honda", 2019, "Hitam", 4, 4);
    Motorcycle motorcycle1("D 9876 EF", "Yamaha", 2020, "Biru", "Matic", "10L");
    Motorcycle motorcycle2("D 6543 GH", "Suzuki", 2021, "Putih", "Manual", "8L");

    Garage garasi("Rafie", 50);
    garasi.tambahKendaraan(&car1);
    garasi.tambahKendaraan(&car2);
    garasi.tambahKendaraan(&motorcycle1);
    garasi.tambahKendaraan(&motorcycle2);
    garasi.tampilkanInfoKendaraan();

    ParkingLot tempat_parkir(10);
    tempat_parkir.tambahKendaraan();
    tempat_parkir.tambahKendaraan();
    tempat_parkir.tambahKendaraan();

    return 0;
}
