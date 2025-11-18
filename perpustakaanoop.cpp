#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Penulis {
public:
    string nama;
    Penulis(string nama) {
        this->nama = nama;
    }
};

class Buku {
public:
    string judul;
    vector<Penulis> penulisList;

    Buku(string judul, vector<Penulis> penulisList) {
        this->judul = judul;
        this->penulisList = penulisList;    
    }

    string tampilkanPenulis() {
        string daftar = "";
        for (int i = 0; i < penulisList.size(); i++) {
            if (i > 0) daftar += ", ";
            daftar += penulisList[i].nama;
        }
        return daftar;
    }
};

class Kategori {
public:
    string namaKategori;
    vector<Buku> daftarBuku;

    Kategori(string namaKategori) {
        this->namaKategori = namaKategori;
    }

    void tambahBuku(Buku buku) {
        daftarBuku.push_back(buku);
    }

    void tampilkanSemuaBuku() {
        cout << "Kategori: " << namaKategori << endl;
        cout << "==============================" << endl;
        for (int i = 0; i < daftarBuku.size(); i++) {
            cout << "Judul   : " << daftarBuku[i].judul << endl;
            cout << "Penulis : " << daftarBuku[i].tampilkanPenulis() << endl;
            cout << "------------------------------" << endl;
        }
        cout << endl;
    }
};

int main() {
    string kategoriNames[7] = {
        "Teknologi", "Filsafat", "Sejarah",
        "Agama", "Psikologi", "Politik", "Fiksi"
    };

    vector<Kategori> semuaKategori;
    for (int i = 0; i < 7; i++) {
        semuaKategori.push_back(Kategori(kategoriNames[i]));
    }

    semuaKategori[0].tambahBuku(Buku("Dasar Pemrograman", {Penulis("Andi Budiman")}));
    semuaKategori[0].tambahBuku(Buku("Jaringan Komputer", {Penulis("Budi Santoso"), Penulis("Citra Dewi")}));
    semuaKategori[0].tambahBuku(Buku("Kecerdasan Buatan", {Penulis("Dr. Evan Wijaya")}));
    semuaKategori[0].tambahBuku(Buku("Keamanan Siber", {Penulis("Fira Nurlaila")}));
    semuaKategori[0].tambahBuku(Buku("Cloud Computing", {Penulis("Gani Pratama")}));

    semuaKategori[1].tambahBuku(Buku("Meditasi", {Penulis("René Descartes")}));
    semuaKategori[1].tambahBuku(Buku("Kritik Akal Murni", {Penulis("Immanuel Kant")}));
    semuaKategori[1].tambahBuku(Buku("Etika", {Penulis("Baruch Spinoza")}));
    semuaKategori[1].tambahBuku(Buku("Fenomenologi Roh", {Penulis("G.W.F. Hegel")}));
    semuaKategori[1].tambahBuku(Buku("Filsafat sebagai Ilmu", {Penulis("Prof. Suwarno"), Penulis("Dr. Lestari")}));

    semuaKategori[2].tambahBuku(Buku("Sejarah Dunia", {Penulis("J.M. Roberts")}));
    semuaKategori[2].tambahBuku(Buku("Sejarah Indonesia", {Penulis("Marwati Djoened Poesponegoro")}));
    semuaKategori[2].tambahBuku(Buku("Revolusi Prancis", {Penulis("Simon Schama")}));
    semuaKategori[2].tambahBuku(Buku("Perang Dunia II", {Penulis("Antony Beevor")}));
    semuaKategori[2].tambahBuku(Buku("Sejarah Kuno Nusantara", {Penulis("Dr. Haryono")}));

    semuaKategori[3].tambahBuku(Buku("Tafsir Al-Qur'an", {Penulis("Quraish Shihab")}));
    semuaKategori[3].tambahBuku(Buku("Fiqih Islam", {Penulis("Dr. Wahbah Az-Zuhaili")}));
    semuaKategori[3].tambahBuku(Buku("Etika Kristiani", {Penulis("Thomas Aquinas")}));
    semuaKategori[3].tambahBuku(Buku("Filsafat Agama", {Penulis("Dr. Komaruddin Hidayat")}));
    semuaKategori[3].tambahBuku(Buku("Jejak Para Nabi", {Penulis("Ibn Kathir")}));

    semuaKategori[4].tambahBuku(Buku("Psikologi Umum", {Penulis("James Kalat")}));
    semuaKategori[4].tambahBuku(Buku("Manusia Mencari Makna", {Penulis("Viktor Frankl")}));
    semuaKategori[4].tambahBuku(Buku("Kepribadian", {Penulis("Jerry Burger")}));
    semuaKategori[4].tambahBuku(Buku("Psikologi Sosial", {Penulis("David Myers")}));
    semuaKategori[4].tambahBuku(Buku("Emosi dan Kognisi", {Penulis("Prof. Ratna"), Penulis("Dr. Dian")}));

    semuaKategori[5].tambahBuku(Buku("Demokrasi di Indonesia", {Penulis("Prof. Budi Winarno")}));
    semuaKategori[5].tambahBuku(Buku("Teori Politik Modern", {Penulis("Andrew Heywood")}));
    semuaKategori[5].tambahBuku(Buku("Negara dan Kekuasaan", {Penulis("John Locke")}));
    semuaKategori[5].tambahBuku(Buku("Sistem Politik Dunia", {Penulis("Dr. Arifin")}));
    semuaKategori[5].tambahBuku(Buku("Ideologi Politik", {Penulis("Prof. Suryadi")}));

    semuaKategori[6].tambahBuku(Buku("Laskar Pelangi", {Penulis("Andrea Hirata")}));
    semuaKategori[6].tambahBuku(Buku("Bumi Manusia", {Penulis("Pramoedya Ananta Toer")}));
    semuaKategori[6].tambahBuku(Buku("Dilan 1990", {Penulis("Pidi Baiq")}));
    semuaKategori[6].tambahBuku(Buku("Harry Potter", {Penulis("J.K. Rowling")}));
    semuaKategori[6].tambahBuku(Buku("The Hobbit", {Penulis("J.R.R. Tolkien")}));

    for (int i = 0; i < semuaKategori.size(); i++) {
        semuaKategori[i].tampilkanSemuaBuku();
    }

    return 0;
}