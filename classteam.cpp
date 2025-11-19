#include <iostream>

using namespace std;

class Member{
    private:
        string nama;
        string nim;
    
    public:
        Member(){
            nim = "-";
            nama = "-";
        }
        Member(string x, string y){
            nim = x;
            nama = y;
        }
        void setNama(string x){
            if(nama != "-"){
                nama = x;
            }
        }
        string getNama(){
            return nama;
        }

        void setNIM(string x){
            if(nim != "-"){
                nim = x;
            }
        }
        string getNIM(){
            return nim;
        }
};

class Team{
    private:
        string nama;
        Member teammember[4];
        int jumlah;
    
    public:
        Team(string x){
            nama = x;
            jumlah = 0;
        }

        void addMember(Member m){
            if(jumlah < 4){
                teammember[jumlah] = m;
                jumlah += 1;
                cout << m.getNama() << " dengan NIM " << m.getNIM() << " ditambahkan ke tim " << nama << endl;

            } else{
                cout << "Team sudah penuh" << endl;
            }
        }

        string getNama(){
            return nama;
        }
};

int main(){
    Member m0 = Member("2551", "Aqil");
    Member m1 = Member("2552", "Baqil");
    Member m2 = Member("2553", "Caqil");
    Member m3 = Member("2554", "Daqil");


    Team t0 = Team("Qill");
    t0.addMember(m0);
    t0.addMember(m1);
    t0.addMember(m2);
    t0.addMember(m3);
}