#include <iostream>
using namespace std;

int maxNum(int a, int b) {
    return (a > b) ? a : b;
}

float maxNum(float a, float b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of integers: " << maxNum(10, 20) << endl;
    cout << "Max of real numbers: " << maxNum(3.5f, 2.8f);
    return 0;
}
