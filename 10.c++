#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

double add(int a, double b) {
    return a + b;
}

int main() {
    cout << "Add int + int: " << add(5, 7) << endl;
    cout << "Add float + float: " << add(3.2f, 4.8f) << endl;
    cout << "Add int + double: " << add(5, 6.9);
    return 0;
}
