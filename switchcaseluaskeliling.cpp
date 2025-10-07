#include <iostream> 
using namespace std; 
 
int main () { 
    int pilihan;
    float a, b, r, keliling, luas;

    cout << "1. Menghitung luas dan keliling persegi panjang" << endl;
    cout << "2. Menghitung luas dan keliling lingkaran" << endl;
    cout << "3. Menghitung luas dan keliling segitiga" << endl;
    cout << "Pilihan anda : ";
    cin >> pilihan;

    switch(pilihan) {
        case 1 :
            cout << "Masukkan p\t: ";
            cin >> a;
            cout << "Masukkan l\t: ";
            cin >> b;
            keliling = 2 * (a+b);
            luas = a * b;
            cout << "Keliling persegi panjang\t: " << keliling << "cm" << endl;
            cout << "Luas persegi panjang\t\t: " << luas << "cm2" << endl;
            break;
        case 2 :
            cout << "Masukkan r\t: ";
            cin >> r;
            keliling = 2 * 3.14 * r;
            luas = 3.14 * (r * r);
            cout << "Keliling lingkaran\t: " << keliling << "cm" << endl;
            cout << "Luas lingkaran\t\t: " << luas << "cm2" << endl;
            break;
        case 3 :
            cout << "Masukkan a\t: ";
            cin >> a;
            cout << "Masukkan b\t: ";
            cin >> b;
            cout << "Masukkan r\t: ";
            cin >> r;
            keliling = a + b + r;
            luas = 0.5 * a * b;
            cout << "Keliling segitiga\t: " << keliling << "cm" << endl;
            cout << "Luas segitiga\t\t: " << luas << "cm2" << endl;
            break;

        default : cout << "Data tidak ditemukan, program dihentikan ...";

    }
    return 0; 
} 