#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Число | Квадрат" << endl;
    cout << "--------------" << endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i < 10)
        {
            cout << "  " << i << "   |    " << i * i << endl;
        }
        else if (i >= 10)
        {
            cout << "  " << i << "  |    " << i * i << endl;
        }
        
    }

}