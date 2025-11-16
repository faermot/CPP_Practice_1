#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    int sum = 0;

    cout << "Введите n: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    cout << "Сумма чётных чисел от 1 до " << n << ": " << sum << endl;

    return 0;
}