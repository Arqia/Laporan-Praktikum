#include <iostream>

using namespace std;

int main () {
    int arr1[] = {5, 6, 7, 8, 9};
    int arr2[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr1) / sizeof(arr1[0]);
    int arr3[size];

    for (int i = 0; i < size; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

    for (int i = 0; i < size; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}