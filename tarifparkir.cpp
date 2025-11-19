#include <iostream>
#include <string>

using namespace std;

const int kapsparkir = 10;

string plat[kapsparkir];
int jamM[kapsparkir];
int jumlahmbl = 0;
int totaltarif = 0;

void mblmasuk() {
    if (jumlahmbl >= kapsparkir) {
        cout << "Parkiran sudah penuh!" << endl;
        return;
    }

    int slot = -1;
    for (int i = 0; i < kapsparkir; i++) {
        if (plat[i].empty()) {
            slot = i;
            break;
        }
    }

    cout << "Masukkan plat nomor(Spasi diganti -): ";
    cin >> plat[slot];

    int jam;
    cout << "Masukkan jam masuk (1-24): ";
    cin >> jam;

    if (jam < 1 || jam > 24) {
        cout << "Jam tidak valid. Harap masukkan antara 1-24." << endl;
        plat[slot] = "";
        return;
    }

    jamM[slot] = jam;
    jumlahmbl++;
    cout << "Mobil " << plat[slot] << " berhasil parkir di slot " << slot + 1 << "." << endl;
}

void mblkeluar() {
    if (jumlahmbl == 0) {
        cout << "Parkiran masih kosong." << endl;
        return;
    }

    string platCari;
    cout << "Masukkan plat nomor yang akan keluar(Spasi diganti -): ";
    cin >> platCari;

    int slot = -1;
    for (int i = 0; i < kapsparkir; i++) {
        if (plat[i] == platCari) {
            slot = i;
            break;
        }
    }

    if (slot == -1) {
        cout << "Mobil dengan plat nomor " << platCari << " tidak ditemukan." << endl;
        return;
    }

    int jamK;
    cout << "Masukkan jam keluar (1-24): ";
    cin >> jamK;

    if (jamK < 1 || jamK > 24) {
        cout << "Jam tidak valid." << endl;
        return;
    }

    int durasi;
    if (jamK < jamM[slot]) {
        durasi = (24 - jamM[slot]) + jamK;
    } else {
        durasi = jamK - jamM[slot];
    }

    if (durasi == 0) {
        durasi = 1;
    }

    int tarif = 0;
    if (durasi > 10) {
        tarif = 10000;
    } else if (durasi > 5) {
        tarif = 5000;
    } else if (durasi > 1) {
        tarif = 3000;
    } else {
        tarif = 0;
    }

    cout << "\n--- Struk Parkir ---" << endl;
    cout << "Durasi    : " << durasi << " jam" << endl;
    cout << "Total Tarif: Rp " << tarif << endl;
    cout << "--------------------" << endl;

    totaltarif += tarif;
    plat[slot] = "";
    jamM[slot] = 0;
    jumlahmbl--;
}

void status() {
    cout << "\n=== STATUS PARKIR ===" << endl;
    cout << "Kapasitas Terisi: " << jumlahmbl << "/" << kapsparkir << endl;
    cout << "Sisa Tempat: " << kapsparkir - jumlahmbl << endl;
    cout << "========================" << endl;

    if (jumlahmbl == 0) {
        cout << "Parkiran masih kosong." << endl;
    } else {
        cout << "Daftar Mobil Terparkir:" << endl;
        for (int i = 0; i < kapsparkir; i++) {
            if (!plat[i].empty()) {
                cout << "Slot " << i + 1 << ": " << plat[i] << " (Masuk jam " << jamM[i] << ")" << endl;
            }
        }
    }
    cout << "=====================\n" << endl;
}

int main() {
    for (int i = 0; i < kapsparkir; ++i) {
        plat[i] = "";
        jamM[i] = 0;
    }

    int pilihan;
    do {
        cout << "\n===== SISTEM PARKIR =====" << endl;
        cout << "1. Mobil Masuk" << endl;
        cout << "2. Mobil Keluar" << endl;
        cout << "3. Cek Status Parkir" << endl;
        cout << "4. Keluar Program" << endl;
        cout << "=========================" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                mblmasuk();
                break;
            case 2:
                mblkeluar();
                break;
            case 3:
                status();
                break;
            case 4:
                if (jumlahmbl > 0) {
                    char confirm;
                    cout << "Yakin ingin keluar? Masih ada mobil di parkiran (y/n): ";
                    cin >> confirm;
                    if (confirm != 'y' && confirm != 'Y') {
                        pilihan = 0;
                    }
                }
                break;
            default:
                cout << "Pilihan tidak ada, pilih 1-4" << endl;
        }

    } while (pilihan != 4);

    cout << "\nProgram ditutup." << endl;
    cout << "Total Pendapatan Hari Ini: Rp " << totaltarif << endl;

    return 0;
}