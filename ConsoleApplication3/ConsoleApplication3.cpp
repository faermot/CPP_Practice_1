#include <iostream>         // Подключение библиотеки
using namespace std;        // Использование пространства имён


int main() {                // Главная функция
    setlocale(LC_ALL, "Russian");
    cout << "Имя: Иван \n";
    cout << "Возраст: 25 \n";
    cout << "Рост: 180 \n";
    cout << "Вес: 75";
    return 0;               // Возврат из программы
}