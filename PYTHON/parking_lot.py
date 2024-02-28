class ParkingLot:
    def __init__(self, kapasitas=""):
        self._kapasitas = kapasitas
        self._jumlah_kendaraan_saat_ini = 0

    @property
    def kapasitas(self):
        return self._kapasitas

    @property
    def jumlah_kendaraan_saat_ini(self):
        return self._jumlah_kendaraan_saat_ini

    def tambah_kendaraan(self):
        if self._jumlah_kendaraan_saat_ini < self.kapasitas:
            self._jumlah_kendaraan_saat_ini += 1
        else:
            print("Tempat parkir penuh.")
