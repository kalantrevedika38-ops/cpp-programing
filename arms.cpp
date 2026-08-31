#include <iostream>
using namespace std;

int main() {
    int n, original, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while(n != 0) {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if(sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}