class Garage:
    def __init__(self, nama_garasi="", luas_garasi=""):
        self._nama_garasi = nama_garasi
        self._luas_garasi = luas_garasi
        self._daftar_kendaraan = []

    @property
    def nama_garasi(self):
        return self._nama_garasi

    @property
    def luas_garasi(self):
        return self._luas_garasi

    def tambah_kendaraan(self, kendaraan):
        self._daftar_kendaraan.append(kendaraan)

    def tampilkan_info_kendaraan(self):
        print(f"Info Kendaraan di garasi {self.nama_garasi}:")
        for kendaraan in self._daftar_kendaraan:
            print(kendaraan.display_info())
