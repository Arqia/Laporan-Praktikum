#include <iostream>

using namespace std;

int main() {
    int arr1[3][2] = {  {1, 2}, 
                        {3, 4}, 
                        {5, 6}  };

    int arr2[3][2] = {  {6, 5}, 
                        {4, 3}, 
                        {2, 1}  };
    int i, j;
    int hasilplus[3][2], hasilmin[3][2];

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            hasilplus[i][j] = arr1[i][j] + arr2[i][j];
            hasilmin[i][j] = arr2[i][j] - arr1[i][j];           
        }
    }
    cout << "Penjumlahan :\n";
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            cout << hasilplus[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\n";

    cout << "Pengurangan :\n";
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            cout << hasilmin[i][j] << " ";
        }
        cout << endl;
    }
}
