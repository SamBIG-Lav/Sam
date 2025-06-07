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

        int array[100][100]; // массив максимум 100x100

        // Заполнение и вывод массива
        cout << "\nСлучайный массив:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                array[i][j] = rand() % 101 - 50; // от -50 до 50
                cout << array[i][j] << "\t";
            }
            cout << endl;
        }

        int number, count = 0;
        cout << "\nВведите число: ";
        cin >> number;

        // Поиск подходящих элементов
        cout << "\nПодходящие элементы (больше " << number << " и сумма индексов кратна 3):\n";
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                if (array[i][j] > number && (i + j) % 3 == 0) {
                    cout << "Значение " << array[i][j] << " на позиции [" << i << "][" << j << "]\n";
                    count++;
                }

        cout << "Всего таких элементов: " << count << "\n";

        // Повтор
        char again;
        cout << "\nХотите повторить? (y/n): ";
        cin >> again;
        if (again != 'y' && again != 'Y') break;

        cout << "\n-----------------------------\n";
    }

    return 0;
}

}
