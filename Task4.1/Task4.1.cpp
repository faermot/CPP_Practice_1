#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int x, y;

    cout << "Введите два числа: ";
    cin >> x >> y;

    cout << "НОД(" << x << ", " << y << ") = " << gcd(x, y) << endl;
    cout << "НОК(" << x << ", " << y << ") = " << lcm(x, y) << endl;

    return 0;
}