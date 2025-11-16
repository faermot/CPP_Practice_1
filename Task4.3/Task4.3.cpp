#include <iostream>
using namespace std;

int fibonacciIterative(int n) {
    if (n <= 1) return n;

    int a = 0, b = 1, result;
    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

int fibonacciRecursive(int n) {
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n;

    cout << "Введите n: ";
    cin >> n;

    cout << "Число Фибоначчи (итеративно): " << fibonacciIterative(n) << endl;

    if (n <= 35) {
        cout << "Число Фибоначчи (рекурсивно): " << fibonacciRecursive(n) << endl;
    }

    return 0;
}