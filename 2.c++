#include <iostream>
using namespace std;

int highestDigit(int n) {
    int maxDigit = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit > maxDigit)
            maxDigit = digit;
        n /= 10;
    }
    return maxDigit;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Highest digit: " << highestDigit(num);
    return 0;
}
