#include <iostream>
#include <string>

using namespace std;

int main () { 
    string nama = "Farrel Arzaqia Mecca";
    string nim = "255150301111027";
    string lognama1, logpass1, lognama2, logpass2;

    cout << "Masukkan Nama\t: ";
    cin >> lognama1;
    cout << "Masukkan Password\t: ";
    cin >> logpass1;

    cout << "Masukkan Ulang Nama\t: ";
    cin >> lognama2;
    cout << "Masukkan Ulang Password\t: ";
    cin >> logpass2;
    
    (lognama1 == lognama2 && logpass1 == logpass2) ? 
        cout << "Nama\t: " << nama << "\n" << "NIM\t: " << nim << endl : 
        cout << "Data tidak ditemukan!" << endl;



    return 0; 
} 


    //x == 5 ? cout << "Benar\n" : cout << "Salah\n";
    //cout << "Masukkan Nama\t: ";
    //getline(cin, nama);
    //cout << "Masukkan NIM\t: ";
    //cin >> nim;

    //nama == n ? cout << "Nama\t: " << nama << "\n" : cout << "Input Nama Salah" << endl;
    //nim == ni ? cout << "NIM\t: " << nim : cout << "Input NIM Salah" << endl;