#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4,};
    int arr2[] = {5, 6, 7};

    int ukuran1 = sizeof(arr1) / sizeof(arr1[0]);
    int ukuran2 = sizeof(arr2) / sizeof(arr2[0]);
    int ukuranGabungan = ukuran1 + ukuran2;

    int arrGabungan[ukuranGabungan];

    for (int i = 0; i < ukuran1; i++) {
        arrGabungan[i] = arr1[i];
    }

    for (int i = 0; i < ukuran2; i++) {
        arrGabungan[ukuran1 + i] = arr2[i];
    }

    cout << "Array hasil gabungan: ";
    for (int i = 0; i < ukuranGabungan; i++) {
        cout << arrGabungan[i] << " ";
    }
    cout << endl;

    return 0;
}