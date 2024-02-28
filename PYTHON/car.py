from vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, plat_nomor="", merk="", tahun_produksi="", warna="", jumlah_kursi="", jumlah_pintu=""):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self._jumlah_kursi = jumlah_kursi
        self._jumlah_pintu = jumlah_pintu

    @property
    def jumlah_kursi(self):
        return self._jumlah_kursi

    @property
    def jumlah_pintu(self):
        return self._jumlah_pintu

    def display_info(self):
        return f"{super().display_info()}, Jumlah Kursi: {self.jumlah_kursi}, Jumlah Pintu: {self.jumlah_pintu}"
