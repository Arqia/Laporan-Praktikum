#include <iostream>
using namespace std;

class Menu {
private:
    int kode_menu;
    string nama;
    int harga;
    int stok;

public:
    void set_menu(int kode, string nm, int hrg, int st) {
        kode_menu = kode;
        nama = nm;
        harga = hrg;
        stok = st;
        
    }

    int get_harga() {
        return harga;
    }

    void get_menu() {
        cout << "Menu: " << nama << " (Rp" << harga << ")" << endl;
    }

    int get_kode_menu() {
        return kode_menu;
    }

    string get_nama() {
        return nama;
    }
};

class order {
private:
    int no;
    int kode_menu;
    int id_cust;
    int jumlah;

public:
    void set_order(int num, int id_c, int kd_mn, int jm) {
        no = num;
        kode_menu = kd_mn;
        id_cust = id_c;
        jumlah = jm;
    }

    void get_order(int kode) {
        if (no == kode) {
            cout << "Pesanan No: " << no << endl;
            cout << "ID Customer: " << id_cust << endl;
            cout << "Kode Menu: " << kode_menu << endl;
            cout << "Jumlah: " << jumlah << endl;
        }
    }

    int get_custid() {
        return id_cust;
    }

    int get_menuid() {
        return kode_menu;
    }
};

class Customer {
private:
    int id_cust;
    string nama;
    int saldo;

public:
    void set_customer(int id, string nm, int sld) {
        id_cust = id;
        nama = nm;
        saldo = sld;
    }

    int get_saldo() {
        return saldo;
    }

    void get_customer() {
        cout << "Customer: " << nama << " (ID: " << id_cust << ", Saldo: Rp" << saldo << ")" << endl;
    }

    int get_custid() {
        return id_cust;
    }

    string get_nama() {
        return nama;
    }
};

int main() {
    cout << "=== SISTEM PEMESANAN SESUAI DIAGRAM ===" << endl;

    Menu mn[3];
    mn[0].set_menu(1, "ayam geprek", 10000, 10);
    mn[1].set_menu(2, "nasi goreng", 12000, 10);

    Customer cs[3];
    cs[0].set_customer(1, "Kael", 15000);
    cs[1].set_customer(2, "Ano", 15000);
    cs[2].set_customer(3, "Lutfi", 15000);

    order od[1];
    od[0].set_order(1, 1, 1, 1);

    cout << "\nMenu 0:" << endl;
    mn[0].get_menu();

    cout << "\nCustomer 0:" << endl;
    cs[0].get_customer();

    cout << "\nPesanan 0:" << endl;
    od[0].get_order(1);

    return 0;
}