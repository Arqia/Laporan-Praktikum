#include <iostream>
using namespace std;

bool isprima(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Masukkan sebuah bilangan: ";
    cin >> n;

    if (isprima(n)) {
        cout << n << " adalah bilangan prima." << endl;
    } else {
        cout << n << " bukan bilangan prima." << endl;
    }

    cout << "Bilangan prima dari 1 hingga 100:" << endl;
    for (int i = 2; i <= 100; i++) {
        if (isprima(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

