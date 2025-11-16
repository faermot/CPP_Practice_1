#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите 3 стороны треугольника: ";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Треугольник не существует" << endl;
        return 0;
    }
    cout << "Треугольник существует" << endl;

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
    {
        cout << "Треугольник прямоугольный" << endl;
    }

    if (a == b && b == c)
    {
        cout << "Треугольник равносторонний" << endl;
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Треугольник равнобедренный" << endl;
    }
    else
    {
        cout << "Треугольник разносторонний" << endl;
    }

}
