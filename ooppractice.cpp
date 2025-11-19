#include <iostream>       // 1. Library untuk input/output (cout, cin, dll)
using namespace std;      // 2. Agar tidak perlu menulis "std::" di depan cout, string, dll

// 3. Mendefinisikan class bernama SensorSuhu
class SensorSuhu {
private:
    // 4. Data anggota (atribut) disembunyikan → enkapsulasi
    double suhuCelcius;   // 5. Menyimpan suhu dalam satuan Celsius

public:
    // 6. Constructor default: dipanggil saat objek dibuat tanpa parameter
    SensorSuhu() {
        suhuCelcius = 25.0;  // 7. Inisialisasi awal suhu ke 25°C (suhu ruangan)
    }

    // 8. Constructor berparameter: memungkinkan inisialisasi suhu saat pembuatan objek
    SensorSuhu(double suhuAwal) {
        setSuhu(suhuAwal);   // 9. Gunakan setter agar validasi tetap berlaku
    }

    // 10. Setter: method untuk mengatur nilai suhu (dengan validasi)
    void setSuhu(double suhu) {
        if (suhu >= -273.15) {           // 11. Validasi: suhu tidak boleh di bawah nol mutlak
            suhuCelcius = suhu;
        } else {
            cout << "Error: Suhu tidak valid (di bawah nol mutlak)!" << endl;
            suhuCelcius = -273.15;       // 12. Set ke batas terendah jika invalid
        }
    }

    // 13. Getter: method untuk mengambil nilai suhu saat ini
    double getSuhu() const {
        return suhuCelcius;              // 14. Mengembalikan nilai suhu
    }

    // 15. Method untuk mengonversi suhu ke Fahrenheit
    double keFahrenheit() const {
        return (suhuCelcius * 9.0 / 5.0) + 32;  // 16. Rumus konversi °C → °F
    }

    // 17. Method untuk menentukan status suhu
    string getStatus() const {
        if (suhuCelcius < 15.0) {
            return "Dingin";             // 18. Suhu rendah → dingin
        } else if (suhuCelcius > 35.0) {
            return "Panas";              // 19. Suhu tinggi → panas
        } else {
            return "Normal";             // 20. Rentang nyaman → normal
        }
    }

    // 21. Method untuk menampilkan informasi lengkap sensor
    void tampilkanData() const {
        cout << "=== Data Sensor Suhu ===" << endl;
        cout << "Suhu (°C)     : " << suhuCelcius << endl;
        cout << "Suhu (°F)     : " << keFahrenheit() << endl;
        cout << "Status        : " << getStatus() << endl;
        cout << "========================" << endl;
    }
};

// 22. Fungsi utama program
int main() {
    int x;

    cin >> x;

    SensorSuhu sensor1(x);
    sensor1.tampilkanData();

    return 0;  // 27. Program selesai
}