#include <iostream>

using namespace std;

class Manusia{
    protected:
        string nama;
    public:
        void setNama(string x){
            nama = x;
        }
        string getNama(){
            return nama;
        }
};

class Mahasiswa: public Manusia{
    private:
        string nim;
    public:
        void setNim(string x){
            nim = x;
        }
        string getNim(){
            return nim;
        }
        void perkenalan(){
            cout << "Nama saya: " << nama << endl;
        }

};

class Dosen: public Manusia{
    private:
        string nidn;
    public:
        void setNidn(string x){
            nidn = x;
        }
        string getNidn(){
            return nidn;
        }

};

class Pegawai: public Manusia{
    private:
        string nip;
    public:
        void setNip(string x){
            nip = x;
        }
        string getNip(){
            return nip;
        }
};

int main(){
    Mahasiswa mhs;
    Dosen dsn;
    Pegawai p;

    mhs.setNama("Aqil");
    mhs.setNim("2501");

    dsn.setNama("Naser");
    dsn.setNidn("000000");

    p.setNama("Agus");
    p.setNip("1234");

    cout << mhs.getNama() << " " << mhs.getNim() << endl;
    cout << dsn.getNama() << " " << dsn.getNidn() << endl;
    cout << p.getNama() << " " << p.getNip() << endl;
}
