#include <iostream>

using namespace std;

struct datamhs{
    string nama;
    string nim;
    int umur;
};

int main(){
    datamhs mahasiswa[2];

    for(int i = 0; i < 2; i++){
        cout << "Masukkan nama mahasiswa " << i + 1 << "\t: ";
        cin >> mahasiswa[i].nama;
        cout << "Masukkan NIM mahasiswa " << i + 1 << "\t: ";
        cin >> mahasiswa[i].nim;
        cout << "Masukkan umur mahasiswa " << i + 1 << "\t: ";
        cin >> mahasiswa[i].umur;
        cout << endl;
    }

    for(int i = 0; i < 2; i++){
        cout << "Nama mahasiswa " << i + 1 << "\t: ";
        cout << mahasiswa[i].nama << endl;
        cout << "NIM mahasiswa " << i + 1 << "\t\t: ";
        cout << mahasiswa[i].nim << endl;
        cout << "Umur mahasiswa " << i + 1 << "\t: ";
        cout << mahasiswa[i].umur << endl;
        cout << endl;
    }

}

