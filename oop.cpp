#include <iostream>
using namespace std;

class Mobil {
    private:
        void ubahSekon(double jam);
        void ubahKecepatan(double kmPerJam);

    public:
        string nopol;
        string warna;
        string manufaktur;
        double kecepatan;
        double waktu;

        Mobil();
        Mobil(string x, string y, string z, double v);
        void displayMessege();
        void setWaktu(double jam);
        void setKecepatan(double kmPerJam);
        double hitungJarak();
};

Mobil::Mobil() {
    nopol = "";
    warna = "";
    manufaktur = "";
    kecepatan = 0.0;
    waktu = 0.0;
}

Mobil::Mobil(string x, string y, string z, double v) {
    nopol = x;
    warna = y;
    manufaktur = z;
    ubahKecepatan(v);
    waktu = 0.0;
}

void Mobil::ubahSekon(double jam) {
    waktu = jam * 3600;
}

void Mobil::ubahKecepatan(double kmPerJam) {
    kecepatan = kmPerJam / 3.6;
}

void Mobil::setWaktu(double jam) {
    ubahSekon(jam);
}

void Mobil::setKecepatan(double kmPerJam) {
    ubahKecepatan(kmPerJam);
}

double Mobil::hitungJarak() {
    return kecepatan * waktu;
}

void Mobil::displayMessege() {
    cout << "----------------------------------------" << endl;
    cout << "Nopol\t\t: " << nopol << endl;
    cout << "Warna\t\t: " << warna << endl;
    cout << "Manufaktur\t: " << manufaktur << endl;
    cout << "Kecepatan\t: " << kecepatan << " m/s" << endl;
    cout << "Waktu\t\t: " << waktu << " sekon" << endl;
    cout << "Jarak\t\t: " << hitungJarak() / 1000.0 << " km" << endl;
    cout << "----------------------------------------" << endl;
}

int main() {
    Mobil mobil1;
    cout << "Nopol: ";
    cin >> mobil1.nopol;
    cout << "Warna: ";
    cin >> mobil1.warna;
    cout << "Manufaktur: ";
    cin >> mobil1.manufaktur;

    double inputKecepatan;
    cout << "Kecepatan (dalam km/jam): ";
    cin >> inputKecepatan;
    mobil1.setKecepatan(inputKecepatan);

    double inputWaktu;
    cout << "Waktu (dalam jam): ";
    cin >> inputWaktu;
    mobil1.setWaktu(inputWaktu);

    mobil1.displayMessege();
    return 0;
}