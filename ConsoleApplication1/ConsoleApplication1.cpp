#include <iostream>         // Подключение библиотеки
using namespace std;        // Использование пространства имён


int main() {                // Главная функция
    setlocale(LC_ALL, "Russian");

    int a, b, c;

    cout << "Введите число 1: ";
    cin >> a;

    cout << "Введите число 2: ";
    cin >> b;

    cout << "Введите число 3: ";
    cin >> c;

    cout << "Сумма: " << a + b + c << "\n";
    cout << "AVG: " << (a + b + c) / 3 << "\n";
    cout << "Произведение: " << a * b * c;
}