#include <iostream>

using namespace std;

int main () {
    int nilai;
    string grade;

    cout << "Masukkan nilai\t: ";
    cin >> nilai;

    if (nilai < 50) {
        grade = "E";
    }
    else if (nilai < 55) {
        grade = "D";
    }
    else if (nilai < 65) {
        grade = "C";
    }
    else if (nilai < 70) {
        grade = "C+";
    }
    else if (nilai < 75) {
        grade = "B";
    }
    else if (nilai < 80) {
        grade = "B+";
    }
    else {
        grade = "A";
    }

    cout << "Nilai akhir kamu adalah " << grade;

    return 0;

}