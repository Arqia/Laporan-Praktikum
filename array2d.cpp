#include <iostream>
using namespace std;

int main() {
    int data[3][3];
    
    // Hitung jumlah baris dan kolom tanpa #define
    int kolom = sizeof(data) / sizeof(data[0]);      // jumlah baris (3)
    int baris = sizeof(data[0]) / sizeof(data[0][0]); // jumlah kolom (3)

    // Isi array
    for (int i = 0; i < kolom; i++) {
        for (int j = 0; j < baris; j++) {
            data[i][j] = i * j;
        }
    }

    // Cetak array
    for (int i = 0; i < kolom; i++) {
        for (int j = 0; j < baris; j++) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}