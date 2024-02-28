from vehicle import Vehicle

class Motorcycle(Vehicle):
    def __init__(self, plat_nomor="", merk="", tahun_produksi="", warna="", jenis_motor="", kapasitas_tangki=""):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self._jenis_motor = jenis_motor
        self._kapasitas_tangki = kapasitas_tangki

    @property
    def jenis_motor(self):
        return self._jenis_motor

    @property
    def kapasitas_tangki(self):
        return self._kapasitas_tangki

    def display_info(self):
        return f"{super().display_info()}, Jenis Motor: {self.jenis_motor}, Kapasitas Tangki: {self.kapasitas_tangki}"
