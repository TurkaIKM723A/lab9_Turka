#include <iostream>

using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int main() {

    setlocale(LC_CTYPE, "ukr");

    int a[MAX_ROWS][MAX_COLS];
    int rows, cols, n, k;

    cout << "����i�� �i���i��� ����i� � �����i a: ";
    cin >> rows;
    cout << "����i�� �i���i��� ������i� � �����i a: ";
    cin >> cols;

    cout << "����i�� �������� ������ a:" << '\n';

    for (int i = 0; i < rows; ++i) {

        for (int j = 0; j < cols; ++j) {

            cin >> a[i][j];
        }
    }

    cout << "����i�� ����� ����� ��� ��������� (n): ";
    cin >> n;
    cout << "����i�� ����� ������� ��� ��������� (k): ";
    cin >> k;

    if (n >= 0 && n < rows && k >= 0 && k < cols) {

        cout << "����� b � ��������� ������ " << n << " �� �������� " << k << ":" << '\n';

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

        cout << "����������� ������i �������� n ��� k!" << '\n';
    }

    return 0;

}

