#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    string c;
    cout << "Введите выражение в формате (число_1 действие число_2): ";
    cin >> a >> c >> b;
    
    if (c == "+")
    {
        cout << "Результат сложения " << a << " и " << b << ": " << a + b;
    }
    else if (c == "-")
    {
        cout << "Результат вычитания " << b << " из " << a << ": " << a - b;
    }
    else if (c == "*")
    {
        cout << "Результат произведения " << a << " и " << b << ": " << a * b;
    }
    else if (c == "/")
    {
        if (b == 0)
        {
            cout << "На ноль делить нельзя";
            return 0;
        }
        cout << "Результат деления " << a << " и " << b << ": " << a / b;
    }
}