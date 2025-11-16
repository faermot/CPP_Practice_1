#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;

    cout << "Проверка на число Армстронга" << endl;
    cout << "Введите число: ";
    cin >> n;

    int temp = n;
    int count = 0;

    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;

    while (temp > 0) {
        int digit = temp % 10;

        int p = 1;
        for (int i = 0; i < count; i++) 
        {
            p *= digit;
        }

        sum += p;
        temp /= 10;
    }

    if (sum == n)
        cout << "Верно";
    else
        cout << "Не верно";

    return 0;
}