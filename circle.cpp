#include <iostream>
using namespace std;

void circle(float r) {
    float area, circumference;
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference;
}

int main() {
    float r;

    cout << "Enter radius: ";
    cin >> r;

    circle(r);

    return 0;
}