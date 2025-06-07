#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Введите количество строк и столбцов: ";
    cin >> rows >> cols;

    int array[100][100]; // Предполагаем, что размер не больше 100x100

    // Ввод элементов массива
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> array[i][j];

    int number, count = 0;
    cout << "Введите число: ";
    cin >> number;

    // Проверка условий и вывод
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (array[i][j] > number && (i + j) % 3 == 0) {
                cout << "Элемент " << array[i][j] << " на позиции [" << i << "][" << j << "]\n";
                ++count;
            }

    cout << "Всего подходящих элементов: " << count << endl;
    return 0;
}
