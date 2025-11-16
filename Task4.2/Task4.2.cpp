#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Palindrome(int n)
{
    string line = to_string(n);
    reverse(line.begin(), line.end());
    if (line == to_string(n))
    {
        cout << "Число является палиндромом";
    }
    else
    {
        cout << "Число не является палиндромом";
    }


}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите число: ";
    cin >> n;
    Palindrome(n);
}
