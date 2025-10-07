#include    <iostream> 
using namespace std;

int main () { 
    float nilai;

    cin >> nilai; 
    if (nilai > 60) { 
    cout << "Anda Lulus" << endl; 
    } else if (nilai >= 40) { 
    cout << "Anda harus mengulang" << endl; 
    } else { 
    cout << "Anda gagal\n" << endl; 
    } 


return 0; 
} 

