#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai : ";
    cin >> nilai;

    if (nilai * 2 < 50) {
        nilai += 10;
    }

    if (nilai <= 20 && nilai % 2 == 1) {
        cout << "Filkom" << endl;
        cout << "UB" << endl;
    } else if (nilai <= 20 && nilai % 2 == 0) {
        cout << "Filkom" << endl;
        cout << "Brawijaya" << endl;
    } else if (nilai > 20 && nilai % 2 == 1) {
        cout << "PTIIK" << endl;
        cout << "UB" << endl;
    } else {
        cout << "PTIIK" << endl;
        cout << "Brawijaya" << endl;
    }

    return 0;
}

