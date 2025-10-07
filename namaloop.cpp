#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama = "FARREL";
    const int TINGGI = 5;
    const int LEBAR = 6;

    for (char c : nama) {
        for (int i = 1; i <= TINGGI; i++) {
            if (c == 'F') {
                if (i == 1 || i == 3) {
                    for (int j = 1; j <= LEBAR; j++) cout << 'F';
                } else {
                    cout << 'F';
                }
            } else if (c == 'A') {
                if (i == 1) {
                    cout << ' ';
                    for (int j = 1; j <= LEBAR - 2; j++) cout << 'A';
                } else if (i == 3) {
                    for (int j = 1; j <= LEBAR; j++) cout << 'A';
                } else {
                    cout << 'A';
                    for (int j = 1; j <= LEBAR - 2; j++) cout << ' ';
                    cout << 'A';
                }
            } else if (c == 'R') {
                if (i == 1 || i == 3) {
                    for (int j = 1; j < LEBAR; j++) cout << 'R';
                } else if (i == 4) {
                    cout << 'R';
                    for (int j = 1; j <= LEBAR - 3; j++) cout << ' ';
                    cout << 'R';
                } else {
                    cout << 'R';
                    for (int j = 1; j < LEBAR - 1; j++) cout << ' ';
                    cout << 'R';
                }
            } else if (c == 'E') {
                if (i == 1 || i == 3 || i == 5) {
                    for (int j = 1; j <= LEBAR; j++) cout << 'E';
                } else {
                    cout << 'E';
                }
            } else if (c == 'L') {
                if (i == 5) {
                    for (int j = 1; j <= LEBAR; j++) cout << 'L';
                } else {
                    cout << 'L';
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}


