#include <iostream>

using namespace std;

struct menu
{
    int kode;
    string nama;
    int harga;
};

int main(){
    int saldo;
    int pilihan;
    struct menu arrmenu[3];
    arrmenu[0] = {1, "ayam geprek", 10000};
    arrmenu[1] = {2, "nasi goreng", 12000};
    arrmenu[2] = {3, "tahu telor", 13000};
    

    cout << "==== Menu ====" << endl;
    for(int i; i < 3; i++){
        cout << arrmenu[i].kode << ". " << arrmenu[i].nama << "\t" << arrmenu[i].harga << endl;
    }

    cout << "Masukkan saldo gopay : ";
    cin >> saldo;
 
    cout << "Masukkan menu : ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "Menu yang dipesan adalah :" << endl;
            cout << arrmenu[0].kode << ". " << arrmenu[0].nama << "\t" << arrmenu[0].harga << endl;
            saldo -= arrmenu[0].harga;
            cout << "Saldo sisa : " << saldo << endl;
            break;

        case 2:
            cout << "Menu yang dipesan adalah :" << endl;
            cout << arrmenu[1].kode << ". " << arrmenu[1].nama << "\t" << arrmenu[1].harga << endl;
            saldo -= arrmenu[1].harga;
            cout << "Saldo sisa : " << saldo << endl;
            break;

        case 3:
            cout << "Menu yang dipesan adalah :" << endl;
            cout << arrmenu[2].kode << ". " << arrmenu[2].nama << "\t" << arrmenu[2].harga << endl;
            saldo -= arrmenu[2].harga;
            cout << "Saldo sisa : " << saldo << endl;
            break;
    }
}
