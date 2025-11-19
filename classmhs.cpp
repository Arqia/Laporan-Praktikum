#include <iostream>

using namespace std;

class mhs{
    public:
        string nama;
        string nim;
        int umur;
        string rumah;
        int nilai;
        int sks;
        double ipk;
        mhs();
        void hitungipk();
        void lulus();
};

mhs::mhs(){
    nama = "";
    nim = "";
    umur = 0;
    rumah = "";
    nilai = 0;
    sks = 0;
    ipk = 0.0;
}


void mhs::hitungipk(){
    ipk = nilai / sks;
    cout << "IPK mu adalah " << ipk << endl;
}

void mhs::lulus(){
    if(ipk > 2.0){
        cout << "Lulus" << endl;
    } else {
        cout << "Tidak lulus" << endl;
    }
}

int main(){
    mhs mahasiswa1;
    mahasiswa1.nama = "Farrel";
    mahasiswa1.nim = "255150301111027";
    mahasiswa1.umur = 19;
    mahasiswa1.rumah = "Malang";
    mahasiswa1.nilai = 100;
    mahasiswa1.sks = 5;

    mahasiswa1.hitungipk();
    mahasiswa1.lulus();
}

