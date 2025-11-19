#include <iostream>
using namespace std;

const int MAX = 10;

void addition(int dest[][MAX], int a[][MAX], int b[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dest[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtraction(int dest[][MAX], int a[][MAX], int b[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dest[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplication(int dest[][MAX], int a[][MAX], int b[][MAX], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            dest[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                dest[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int isDiagonalMatrix(int source[][MAX], int rows, int cols) {
    if (rows != cols) return 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i != j && source[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

int isIdentityMatrix(int source[][MAX], int rows, int cols) {
    if (rows != cols) return 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                if (source[i][j] != 1) return 0;
            } else {
                if (source[i][j] != 0) return 0;
            }
        }
    }
    return 1;
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int n = 3;

    cout << "Masukkan matriks A (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Masukkan matriks B (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    addition(C, A, B, n, n);
    cout << "\nHasil Penjumlahan:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    subtraction(C, A, B, n, n);
    cout << "\nHasil Pengurangan:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    multiplication(C, A, B, n, n, n);
    cout << "\nHasil Perkalian:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriks A ";
    if (isDiagonalMatrix(A, n, n)) {
        cout << "adalah matriks diagonal.\n";
    } else {
        cout << "bukan matriks diagonal.\n";
    }

    cout << "Matriks A ";
    if (isIdentityMatrix(A, n, n)) {
        cout << "adalah matriks identitas.\n";
    } else {
        cout << "bukan matriks identitas.\n";
    }

    return 0;
}