#include <iostream>
using namespace std;

bool isFibonacci(int n) {
    int a = 0, b = 1;
    while (a <= n) {
        if (a == n)
            return true;
        int c = a + b;
        a = b;
        b = c;
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isFibonacci(num))
        cout << num << " is in Fibonacci series.";
    else
        cout << num << " is not in Fibonacci series.";
    return 0;
}
