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
    

    cout << "Masukkan saldo gopay :";
    cin >> saldo;

    while(true) {
        cout << "==== Menu ====" << endl;
        cout << arrmenu[0].kode << ". " << arrmenu[0].nama << "\t" << arrmenu[0].harga << endl;
        cout << arrmenu[1].kode << ". " << arrmenu[1].nama << "\t" << arrmenu[1].harga << endl;
        cout << arrmenu[2].kode << ". " << arrmenu[2].nama << "\t" << arrmenu[2].harga << endl;
        cout << "0. Selesai" << endl;
        cout << "Masukkan pilihan : ";
        cin >> pilihan;
        pilihan - 1;

        if(pilihan = -1){
            break;
        }

        if(pilihan >= 0 && pilihan <= 2){
            if(pilihan = 1){}
        }



    }
    

    

}
