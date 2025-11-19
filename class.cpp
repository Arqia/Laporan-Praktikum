#include <iostream>

using namespace std;

class Mahasiswa{
    private:
        // attribute
        string nama;
        double ipk;
    public:
        // constructor 1
        Mahasiswa(){
            nama = "";
            ipk = 0.0;
        }
        // constructor 2
        Mahasiswa(string x, double y){
            nama = x;
            ipk = y;
        }

        // method
        void cetakdata(){
            cout << "Nama: " << nama << endl;
            cout << "IPK:  " << ipk << endl;
        }
};

class Dosen{
    public:
        string nama;
        string homebase;
        void cetakdata();
};

/*
void Dosen::cetakdata(){
    cout << "Nama Dosen: " << nama << endl;
    cout << "Homebase  : " << homebase << endl;
};
*/

class Pegawai{
    public:
        string nama;
        string nip;
        string bagian;

        void cetakdata(){
            cout << "Nama: " << nama << endl;
            cout << "NIP: " << nip << endl;
            cout << "Bagian: " << bagian << endl;
        }
};


int main(){
    //Mahasiswa mhs0;
    //mhs0.nama = "Fabi";
    //mhs0.ipk = 4.0;
    //mhs0.cetakdata();
    //
    //Mahasiswa mhs1;
    //mhs1.nama = "Fatin";
    //mhs1.ipk = 3.95;
    //mhs1.cetakdata();

    /*
    Dosen d0;
    d0.nama = "Naser";
    d0.homebase = "TIF";
    d0.cetakdata();

    
    Dosen d1;
    d1.nama = "Agung";
    d1.homebase = "TKOM";
    d1.cetakdata(); */

    Mahasiswa mhs2;
    mhs2.cetakdata();
    Mahasiswa mhs3("Faiz", 3.90);
    mhs3.cetakdata();

    Pegawai p1;
    p1.nama = "Aqil";
    p1.nip = "25518923479473";
    p1.bagian = "Satpam";
    p1.cetakdata();

    return 0;
}