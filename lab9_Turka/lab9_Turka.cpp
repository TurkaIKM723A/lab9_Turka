#include <iostream>

using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int main() {

    setlocale(LC_CTYPE, "ukr");

    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    cout << "����i�� �i���i��� ����i� � �����i: ";
    cin >> rows;
    cout << "����i�� �i���i��� ������i� � �����i: ";
    cin >> cols;

    cout << "����i�� �������� ������i:" << '\n';

    for (int i = 0; i < rows; ++i) {

        for (int j = 0; j < cols; ++j) {

            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < rows; ++i) {

        for (int j = 0; j < cols; ++j) {

            if (i % 2 == 0 && j % 2 == 0) {

                sum += matrix[i][j];
            }
        }
    }

    cout << "���� �������i� �� ������ �����i��: " << sum << '\n';

    return 0;
}


