#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    int saldo;
    string food[] = {"Ayam Geprek", "Nasi Goreng", "Tahu Telor"};
    int harga[] = {10000, 12000, 13000};
    const int pin_benar = 123;
    
    int pilihan;
    string pesanan[100]; 
    int jumlah_pesanan = 0; 

    cout << "Masukkan nama Pelanggan? ";
    getline(cin, nama); 

    cout << "Masukkan topup gopay? ";
    cin >> saldo;

    while (true) {
        cout << "\n--- Menu GoFood ---\n";
        cout << "Saldo Anda saat ini: Rp " << saldo << endl;
        cout << "1. Ayam Geprek -> 10000\n";
        cout << "2. Nasi Goreng -> 12000\n";
        cout << "3. Tahu Telor  -> 13000\n";
        cout << "0. Selesai & Bayar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 0) {
            break; 
        }
        
        int indeks = pilihan - 1; 

        if (pilihan >= 1 && pilihan <= 3) {
            if (saldo >= harga[indeks]) {
                saldo -= harga[indeks]; 
                pesanan[jumlah_pesanan] = food[indeks]; 
                jumlah_pesanan++; 
                
                cout << "--> '" << food[indeks] << "' berhasil dipesan!\n";
            } else {
                cout << "--> Maaf, saldo tidak cukup!\n";
            }
        } else {
            cout << "--> Pilihan tidak ada di menu!\n";
        }
    }

    if (jumlah_pesanan == 0) {
        cout << "\nAnda tidak memesan apapun.\n";
    } else {
        int pin_input;
        cout << "\nBayar (Masukkan pin " << pin_benar << ")? ";
        cin >> pin_input;

        if (pin_input == pin_benar) {
            cout << "\n--- Pembayaran Berhasil! ---\n";
            cout << "Menu yang dipesan adalah:\n";
            for (int i = 0; i < jumlah_pesanan; i++) {
                cout << "- " << pesanan[i] << endl;
            }
        } else {
            cout << "\nPIN salah! Transaksi gagal.\n";
            for (int i = 0; i < jumlah_pesanan; i++) {
                string item = pesanan[i];
                if (item == "Ayam Geprek") saldo += 10000;
                if (item == "Nasi Goreng") saldo += 12000;
                if (item == "Tahu Telor") saldo += 13000;
            }
        }
    }

    cout << "\nTotal gopay sisa adalah: Rp " << saldo << endl;

    return 0;
}