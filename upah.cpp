#include <iostream>

using namespace std;

int main () {
    int jam, jamlembur, upah, lembur, denda, total;

    cout << "Jam Kerja\t: ";
    cin >> jam;

    if (jam > 60) {
        upah = 60 * 5000;
        lembur = (jam - 60) * 6000;
    } else if (jam < 50) {
        upah = jam * 5000;
        denda = (50 - jam) * 1000;
        lembur = 0;
    } else {
        upah = jam * 5000;
        lembur = 0;
        denda = 0;
    }

    cout << "Upah\t= Rp. " << upah << endl;
    cout << "Lembur\t= Rp. " << lembur << endl;
    cout << "Denda\t= Rp. " << denda << endl;
    total = upah + lembur - denda;
    cout << "--------------------" << endl;
    cout << "Total\t= Rp. " << total << endl;

    return 0;
}

