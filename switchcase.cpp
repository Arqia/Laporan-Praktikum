#include <iostream> 
using namespace std; 
 
int main () { 
    int uang; 
    cout << "Tipe mata uang yang tersedia" << endl; 
    cout << "1. Dolar - USA (kurs USD 1 = Rp 13000,-)" << endl; 
    cout << "2. Yen - Jepang( kurs JPY 1 = Rp. 4000,-)" << endl; 
    cout << "3. Poundsterling - Inggris( kurs 1 Poundsterling = Rp. 10.500, -)" << endl; 
    cout << "4. Euro - MEE( kurs EUR 1 = Rp. 8900,-)" << endl; 
    cout << "5. Riyal - Arab Saudi( kurs 1 Riyal = Rp. 1100,-)" << endl; 
    cout << "Masukkan jenis mata uang anda : "; 
    int pilihan; 
    cin >> pilihan; 
 
    switch(pilihan) { 
        case 1 : 
            cout << "Data diterima, jenis valuta Anda : Dolar Amerika Serikat\n"; 
            cout << "Masukkan banyak uang nda (dalam dolar) : "; 
            cin >> uang; 
            cout << "Uang yang diterima : Rp. " << uang*13000 << ",-\n"; 
            break; 
        case 2 : 
            cout << "Data diterima, jenis valuta Anda : Yen Jepang\n"; 
            cout << "Masukkan banyak uang nda (Yen Jepang) : "; 
            cin >> uang; 
            cout << "Uang yang diterima : Rp. " << uang*4000 << ",-\n"; 
            break; 
        case 3 : 
            cout << "Data diterima, jenis valuta Anda : Poundsterling Inggris\n"; 
            cout << "Masukkan banyak uang nda (Poundsterling Inggris) : "; 
            cin >> uang; 
            cout << "Uang yang diterima : Rp. " << uang*15000 << ",-\n"; 
            break; 
        case 4 : 
            cout << "Data diterima, jenis valuta Anda : Euro MEE\n"; 
            cout << "Masukkan banyak uang nda (Euro MEE) : "; 
            cin >> uang; 
            cout << "Uang yang diterima : Rp. " << uang*14000 << ",-\n"; 
            break; 
        case 5 : 
            cout << "Data diterima, jenis valuta Anda : Riyal Arab Saudi\n"; 
            cout << "Masukkan banyak uang nda (Riyal Arab Saudi) : "; 
            cin >> uang; 
            cout << "Uang yang diterima : Rp. " << uang*5000 << ",-\n"; 
            break; 
        default : cout << "System not found" << endl; 
    } 
    return 0; 

}