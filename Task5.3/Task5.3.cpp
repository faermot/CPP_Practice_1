#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a[3][3];

    cout << "Введите матрицу 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Матрица:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
    }
    cout << "Сумма элементов: " << sum << endl;

    int max = a[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    cout << "Максимальный элемент: " << max << endl;

    int diag = a[0][0] + a[1][1] + a[2][2];
    cout << "Сумма диагонали: " << diag << endl;

    return 0;
}