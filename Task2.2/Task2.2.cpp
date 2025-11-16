#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите 3 числа: ";
    cin >> a >> b >> c;

    int array[] = { a, b, c };
    sort(array, array + 3);

    cout << "Отсортированно: ";
    for (int i; i <= 3; i++)
    {
        cout << array[i + 1];
    }
}
