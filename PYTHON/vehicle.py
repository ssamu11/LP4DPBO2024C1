# Saya Muhammad Rafie Alhabsyi Setiawan NIM 2202400
# mengerjakan soal Latihan Praktikum 4
# dalam mata kuliah DESAIN DAN PEMROGRAMAN BERORIENTASI
# untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

class Vehicle:
    def __init__(self, plat_nomor="", merk="", tahun_produksi="", warna=""):
        self._plat_nomor = plat_nomor
        self._merk = merk
        self._tahun_produksi = tahun_produksi
        self._warna = warna

    @property
    def plat_nomor(self):
        return self._plat_nomor

    @property
    def merk(self):
        return self._merk

    @property
    def tahun_produksi(self):
        return self._tahun_produksi

    @property
    def warna(self):
        return self._warna

    def display_info(self):
        return f"Plat Nomor: {self.plat_nomor}, Merk: {self.merk}, Tahun Produksi: {self.tahun_produksi}, Warna: {self.warna}"
