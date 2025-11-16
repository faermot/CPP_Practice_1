#include <iostream>
using namespace std;

int main()
{   
    setlocale(LC_ALL, "Russian");
    float PI = 3.14159;
    float r, a;


    cout << "------------------------------" << endl;
    cout << "Михаил КРУГ" << endl;
    cout << "Введите радиус: ";
    cin >> r;

    a = PI * r * r;

    cout << "Площадь: " << a << endl;

    cout << "------------------------------" << endl;
    cout << "Петя ПРЯМОУГОЛЬНИК" << endl;
    float r_a, r_b;
    cout << "Введите сторону 1: ";
    cin >> r_a;
    cout << "Введите сторону 2: ";
    cin >> r_b;

    cout << "Площадь: " << r_a * r_b << endl;


    cout << "------------------------------" << endl;
    cout << "Егор ТРЕУГОЛЬНИК" << endl;
    float  t_a, t_b;
    cout << "Введите основание: ";
    cin >> t_a;
    cout << "Введите высоту: ";
    cin >> t_b;

    cout << "Площадь: " << (t_a * t_b) / 2 << endl;

}
