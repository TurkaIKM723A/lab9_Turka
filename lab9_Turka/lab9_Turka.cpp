#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int main() {

    setlocale(LC_CTYPE, "ukr");

    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    cout << "����i�� ����i� ��������� ������i: ";
    cin >> size;

    cout << "����i�� �������� ������i:" << '\n';
    for (int i = 0; i < size; ++i) {

        for (int j = 0; j < size; ++j) {

            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {

        sum += matrix[i][i]; 

    }

    double average = static_cast<double>(sum) / size; 

    cout << "������ ����������� �������i� ������� �i������i: " << average << '\n';

    return 0;
}


