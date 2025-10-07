#include <iostream>
#include <cmath>

using namespace std;

double hitungVolumeBalok();
double hitungVolumeBola();
double hitungVolumeKerucut();
double hitungVolumeSilinder();
double hitungVolumeLimas();

int main() {
    int pilihan;

    do {
        cout << "MENU\n";
        cout << "0. KELUAR\n";
        cout << "1. HITUNG VOLUME BALOK\n";
        cout << "2. HITUNG VOLUME BOLA\n";
        cout << "3. HITUNG VOLUME KERUCUT\n";
        cout << "4. HITUNG VOLUME SILINDER\n";
        cout << "5. HITUNG VOLUME LIMAS SEGITIGA\n";
        cout << "MASUKKAN PILIHAN ANDA: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                double hasil = hitungVolumeBalok();
                cout << "Hasil Volumenya adalah: " << hasil << endl;
                break;
            }
            case 2: {
                double hasil = hitungVolumeBola();
                cout << "Hasil Volumenya adalah: " << hasil << endl;
                break;
            }
            case 3: {
                double hasil = hitungVolumeKerucut();
                cout << "Hasil Volumenya adalah: " << hasil << endl;
                break;
            }
            case 4: {
                double hasil = hitungVolumeSilinder();
                cout << "Hasil Volumenya adalah: " << hasil << endl;
                break;
            }
            case 5: {
                double hasil = hitungVolumeLimas();
                cout << "Hasil Volumenya adalah: " << hasil << endl;
                break;
            }
            case 0:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }

        if (pilihan > 0 && pilihan < 6) {
            cout << "\nTekan Enter untuk melanjutkan...";
            cin.ignore();
            cin.get();
            cout << "\n";
        }

    } while (pilihan != 0);

    return 0;
}

double hitungVolumeBalok() {
    double panjang, lebar, tinggi;
    cout << "Masukkan panjang, lebar, & tinggi: ";
    cin >> panjang >> lebar >> tinggi;
    return panjang * lebar * tinggi;
}

double hitungVolumeBola() {
    double jariJari;
    cout << "Masukkan jari-jari: ";
    cin >> jariJari;
    return (4.0 / 3.0) * M_PI * pow(jariJari, 3);
}

double hitungVolumeKerucut() {
    double jariJari, tinggi;
    cout << "Masukkan jari-jari alas & tinggi: ";
    cin >> jariJari >> tinggi;
    return (1.0 / 3.0) * M_PI * pow(jariJari, 2) * tinggi;
}

double hitungVolumeSilinder() {
    double jariJari, tinggi;
    cout << "Masukkan jari-jari alas & tinggi: ";
    cin >> jariJari >> tinggi;
    return M_PI * pow(jariJari, 2) * tinggi;
}

double hitungVolumeLimas() {
    double luasAlas, tinggiLimas;
    cout << "Masukkan luas alas & tinggi limas: ";
    cin >> luasAlas >> tinggiLimas;
    return (1.0 / 3.0) * luasAlas * tinggiLimas;
}

