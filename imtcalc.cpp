#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float berat, tinggi, imt;
    string kriteria;

    cout << "Berat badan (kg): ";
    cin >> berat;
    cout << "Tinggi badan (m): ";
    cin >> tinggi;

    imt = berat / (tinggi * tinggi);

    if (imt <= 18.5) {
        kriteria = "kurus";
    } else if (imt <= 25) {
        kriteria = "normal";
    } else if (imt <= 30) {
        kriteria = "gemuk";
    } else {
        kriteria = "kegemukan";
    }

    cout << fixed << setprecision(2);
    cout << "IMT = " << imt << " Termasuk " << kriteria << endl;

    return 0;
}

