#include <iostream>

using namespace std;

int main () {
    int tes[] = {1, 2, 3};
    int *vPtr1;
    int *vPtr2;

    vPtr1 = &tes[0];
    vPtr2 = &tes[2];

    int selisih = vPtr2 - vPtr1;

    cout << selisih;

}