#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int combination(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

void printPascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int space = 1; space <= n - i; space++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << combination(i, j) << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    printPascal(n);
    return 0;
}
