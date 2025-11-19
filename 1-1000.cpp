#include <iostream>
using namespace std;

int main() {
    int n = 1000;

    for(int i = 1; i <= n; i++){
        if(i < 10){
            cout << "00" << i << " ";
        } else if(i < 100) {
            cout << "0" << i << " ";
        } else {
            cout << i << " ";
        }
        if(i % 25 == 0){
            cout << endl;
        }
    }
    return 0;
}

