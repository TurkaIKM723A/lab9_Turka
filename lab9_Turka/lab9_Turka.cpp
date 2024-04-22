#include <iostream>

using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int main() {

    setlocale(LC_CTYPE, "ukr");

    int a[MAX_ROWS][MAX_COLS];
    int rows, cols, n, k;

    cout << "Введiть кiлькiсть рядкiв у масивi a: ";
    cin >> rows;
    cout << "Введiть кiлькiсть стовбцiв у масивi a: ";
    cin >> cols;

    cout << "Введiть елементи масиву a:" << '\n';

    for (int i = 0; i < rows; ++i) {

        for (int j = 0; j < cols; ++j) {

            cin >> a[i][j];
        }
    }

    cout << "Введiть номер рядка для видалення (n): ";
    cin >> n;
    cout << "Введiть номер стовбця для видалення (k): ";
    cin >> k;

    if (n >= 0 && n < rows && k >= 0 && k < cols) {

        cout << "Масив b з видаленим рядком " << n << " та стовбцем " << k << ":" << '\n';

        for (int i = 0; i < rows; ++i) {

            if (i != n) {

                for (int j = 0; j < cols; ++j) {

                    if (j != k) {

                        cout << a[i][j] << " " << '\n';
                    }
                }
                cout << '\n';
            }
        }
    }

    else {

        cout << "Неправильно введенi значення n або k!" << '\n';
    }

    return 0;

}

