#include <iostream>
using namespace std;

int faktorial(int x) {
    int hasil = 1;
    for (int k = 1; k <= x; k++) {
        hasil *= k;
    }
    return hasil;
}

int kombinasi(int n, int r) {
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}

int main() {
    int n = 10;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << kombinasi(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}