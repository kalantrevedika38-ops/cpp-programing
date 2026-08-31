#include <iostream>
using namespace std;

int main() {
    float a, b;
    char choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operation (+, -, *, /): ";
    cin >> choice;

    switch(choice) {
        case '+':
            cout << "Addition = " << a + b;
            break;

        case '-':
            cout << "Subtraction = " << a - b;
            break;

        case '*':
            cout << "Multiplication = " << a * b;
            break;

        case '/':
            if(b != 0)
                cout << "Division = " << a / b;
            else
                cout << "Division by zero is not possible";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}