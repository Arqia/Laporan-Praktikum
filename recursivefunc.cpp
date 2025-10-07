#include <iostream>

using namespace std;

double factor (int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * factor(n-1);
    }
}

int main () {
    int num;
    cin >> num;
    cout << "Factorial of " << num << " = " << factor(num);

    return 0;
}