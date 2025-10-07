#include <iostream>

using namespace std;

const float phi = 3.14;

float lingkaran(float r) {
    float luas = phi * r * r;
    return luas;
}

float persegipanjang(float p, float l) {
    float luas = p * l;
    return luas;
}

float kerucut(float r, float t) {
    float luasalas = lingkaran(r);
    float luas = 3 * luasalas * t;
    return luas;
}

float balok(float p, float l, float t) {
    float luasalas = persegipanjang(p, l);
    float luas = luasalas * t;
    return luas;
}


int main () {
    float r, p, l, t;
    int pilihan;

    cout << "Hitung Luas dan Volume\n";
    cout << "1. Luas Lingkaran\n";
    cout << "2. Luas Persegi Panjang\n";
    cout << "3. Volume Kerucut\n";
    cout << "4. Volume Balok\n";
    cout << "Pilihan\t: ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
        cout << "Masukkan nilai r\t: ";
        cin >> r;
        cout << "Hasilnya adalah\t\t: "<< lingkaran(r);
        break;
    
    case 2:
        cout << "Masukkan nilai p\t: ";
        cin >> p;
        cout << "Masukkan nilai l\t: ";
        cin >> l;
        cout << "Hasilnya adalah\t\t: "<< persegipanjang(p, l);
        break;
    
    case 3:
        cout << "Masukkan nilai r\t: ";
        cin >> r;
        cout << "Masukkan nilai t\t: ";
        cin >> t;
        cout << "Hasilnya adalah\t\t: "<< kerucut(r, t);
        break;

    case 4:
        cout << "Masukkan nilai p\t: ";
        cin >> p;
        cout << "Masukkan nilai l\t: ";
        cin >> l;
        cout << "Masukkan nilai t\t: ";
        cin >> t;
        cout << "Hasilnya adalah\t\t: "<< balok(p, l, t);
        break;

    default:
        cout << "Pilihan tidak ada";
        break;
    }
}