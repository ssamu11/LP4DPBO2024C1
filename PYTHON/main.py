from car import Car
from motorcycle import Motorcycle
from garage import Garage
from parking_lot import ParkingLot

def main():
    
    car1 = Car("B 1234 AB", "Toyota", 2018, "Merah", 5, 4)
    car2 = Car("B 5678 CD", "Honda", 2019, "Hitam", 4, 4)
    motorcycle1 = Motorcycle("D 9876 EF", "Yamaha", 2020, "Biru", "Matic", "10L")
    motorcycle2 = Motorcycle("D 6543 GH", "Suzuki", 2021, "Putih", "Manual", "8L")

    
    garasi = Garage("Rafie", 50)
    garasi.tambah_kendaraan(car1)
    garasi.tambah_kendaraan(car2)
    garasi.tambah_kendaraan(motorcycle1)
    garasi.tambah_kendaraan(motorcycle2)
    garasi.tampilkan_info_kendaraan()

    
    tempat_parkir = ParkingLot(10)
    tempat_parkir.tambah_kendaraan()
    tempat_parkir.tambah_kendaraan()
    tempat_parkir.tambah_kendaraan()

if __name__ == "__main__":
    main()
