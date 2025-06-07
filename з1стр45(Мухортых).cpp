#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // инициализация генератора случайных чисел

    while (true) {
        int rows, cols;
        cout << "Введите количество строк и столбцов (например: 3 4): ";
        cin >> rows >> cols;

        int array[100][100]; // двумерный массив максимум 100x100

        // заполнение массива случайными числами и вывод
        cout << "\nСлучайный массив:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                array[i][j] = rand() % 101 - 50; // от -50 до 50
                cout << array[i][j] << "\t";     // форматированный вывод
            }
            cout << endl;
        }

        int number, count = 0;
        cout << "\nВведите число: ";
        cin >> number;

        // поиск элементов, удовлетворяющих условиям
        cout << "\nЭлементы больше " << number << ", у которых сумма индексов кратна 3:\n";
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                if (array[i][j] > number && (i + j) % 3 == 0) {
                    cout << "Значение " << array[i][j] << " на позиции [" << i << "][" << j << "]\n";
                    count++;
                }

        cout << "Всего подходящих элементов: " << count << "\n";

        // предложение повторить
        char again;
        cout << "\nХотите повторить? (y/n): ";
        cin >> again;
        if (again != 'y' && again != 'Y') break;

        cout << "\n-----------------------------\n";
    }

    return 0;
}
