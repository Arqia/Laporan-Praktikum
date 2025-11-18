#include <iostream>
using namespace std;

class BukuTulis {
    private:
        int jumlahHalaman;
        int kataPerHari;
        int kataPerHalaman;

        double hitungHalamanPerHari() {
            return (1.0 * kataPerHari) / kataPerHalaman;
        }

    public:
        BukuTulis(int halaman, int kataHari, int kataHal) {
            jumlahHalaman = halaman;
            kataPerHari = kataHari;
            kataPerHalaman = kataHal;
        }

        double hitungLamaHari() {
            double halamanPerHari = hitungHalamanPerHari();
            if (halamanPerHari <= 0) return 0.0;
            return (1.0 * jumlahHalaman) / halamanPerHari;
        }

        void tampilkanInfo() {
            cout << "========================================" << endl;
            cout << "Informasi Buku Tulis:" << endl;
            cout << "Jumlah Halaman     : " << jumlahHalaman << endl;
            cout << "Kata per Hari      : " << kataPerHari << endl;
            cout << "Kata per Halaman   : " << kataPerHalaman << endl;
            cout << "Halaman per Hari   : " << hitungHalamanPerHari() << endl;
            cout << "Lama Menghabiskan  : " << hitungLamaHari() << " hari" << endl;
            cout << "========================================" << endl;
        }
};

int main() {
    BukuTulis bukuSaya(50, 100, 200);
    bukuSaya.tampilkanInfo();
    return 0;
}