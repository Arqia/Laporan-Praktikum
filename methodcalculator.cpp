#include <iostream>

using namespace std;

void menu(){
    cout << "Pilihan komputasi:" << endl;
    cout << "1. Pertambahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "0. Exit" << endl;
}

int tambah(int a, int b){
    int hsl = a + b;
    return hsl; 
}

int kurang(int a, int b){
    int hsl = a - b;
    return hsl; 
}

int kali(int a, int b){
    int hsl = a * b;
    return hsl; 
}

int bagi(int a, int b){
    int hsl = a / b;
    return hsl; 
}

int main(){
    menu();
    int pilihan, a, b;
    cout << "Masukkan Angka 1 : ";
    cin >> a;
    cout << "Masukkan Angka 2 : ";
    cin >> b;
    cout << "Masukkan Menu : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
        cout << tambah(a, b);
        break;
        case 2:
        cout << kurang(a, b);
        break;
        case 3:
        cout << kali(a, b);
        break;
        case 4:
        cout << bagi(a, b);
        break;
        case 5:
        return 0;
    }
}