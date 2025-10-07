#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, nim;
    string mk1, mk2, mk3, mk4, mk5;
    int sks1, sks2, sks3, sks4, sks5, totalSKS;

    cout << "Masukkan Nama Anda\t\t: ";
    getline(cin, nama);

    cout << "Masukkan NIM Anda\t\t: ";
    cin >> nim;

    cout << endl;

    cout << "Masukkan Nama Mata Kuliah 1\t: ";
    cin >> mk1;
    cout << "Masukkan Jumlah SKS Mata Kuliah 1\t: ";
    cin >> sks1;

    cout << "Masukkan Nama Mata Kuliah 2\t: ";
    cin >> mk2;
    cout << "Masukkan Jumlah SKS Mata Kuliah 2\t: ";
    cin >> sks2;

    cout << "Masukkan Nama Mata Kuliah 3\t: ";
    cin >> mk3;
    cout << "Masukkan Jumlah SKS Mata Kuliah 3\t: ";
    cin >> sks3;

    cout << "Masukkan Nama Mata Kuliah 4\t: ";
    cin >> mk4;
    cout << "Masukkan Jumlah SKS Mata Kuliah 4\t: ";
    cin >> sks4;

    cout << "Masukkan Nama Mata Kuliah 5\t: ";
    cin >> mk5;
    cout << "Masukkan Jumlah SKS Mata Kuliah 5\t: ";
    cin >> sks5;

    totalSKS = sks1 + sks2 + sks3 + sks4 + sks5;

    cout << "\n==============================================" << endl;
    cout << "           KARTU RENCANA STUDI" << endl;
    cout << "==============================================" << endl;
    cout << "Nama\t\t: " << nama << endl;
    cout << "NIM\t\t: " << nim << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Mata Kuliah yang Diambil:" << endl;
    cout << "1. " << mk1 << "\t\t(" << sks1 << " SKS)" << endl;
    cout << "2. " << mk2 << "\t\t(" << sks2 << " SKS)" << endl;
    cout << "3. " << mk3 << "\t\t(" << sks3 << " SKS)" << endl;
    cout << "4. " << mk4 << "\t\t(" << sks4 << " SKS)" << endl;
    cout << "5. " << mk5 << "\t\t(" << sks5 << " SKS)" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Total SKS\t: " << totalSKS << " SKS" << endl;
    cout << "==============================================" << endl;

    return 0;
}