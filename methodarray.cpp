#include <iostream>
using namespace std;

int sum(const int a[], int n) {
    return n == 0 ? 0 : a[n-1] + sum(a, n-1);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << sum(a, n);
    return 0;
}