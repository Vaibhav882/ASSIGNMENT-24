#include <iostream>
using namespace std;

float area(float r) {
    return 3.14f * r * r; // Circle
}

float area(float l, float b) {
    return l * b; // Rectangle
}

float area(float base, float height, int) {
    return 0.5f * base * height; // Triangle
}

int main() {
    cout << "Area of Circle: " << area(5.0f) << endl;
    cout << "Area of Rectangle: " << area(4.0f, 6.0f) << endl;
    cout << "Area of Triangle: " << area(4.0f, 5.0f, 1);
    return 0;
}
