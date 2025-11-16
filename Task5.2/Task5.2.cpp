#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int a = rand() % 100 + 1, b = 0, c = 1;

    cout << "Компьютер загадал число. Ваш вариант: ";
    while (true)
    {
        cin >> b;
        if (a == b)
        {
            cout << "Вы угадали число " << a << " за " << c << " попыток!";
            return 0;
        }
        else if (a < b)
        {
            cout << "Ваше число больше загаданного" << endl;
        }
        else if (a > b)
        {
            cout << "Ваше число меньше загаданного" << endl;
        }
        c++;
        cout << "Ваш вариант: ";
    }
}