#include <iostream>
using namespace std;

int add(int a, int b, int c = 0) {
    return a + b + c;
}

int main() {
    cout << "Sum of 2 numbers: " << add(5, 10) << endl;
    cout << "Sum of 3 numbers: " << add(5, 10, 15);
    return 0;
}
