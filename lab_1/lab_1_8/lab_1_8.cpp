/*
Необходимо создать двумерный массив 5 х 5.
Далее написать функцию, которая заполнит его случайными числами от 30 до 60.
Создать еще две функции, которые находят максимальный и минимальный элементы этого двумерного массива.
*/


#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

const int SIZE = 5;

// Функция для заполнения массива случайными числами от 30 до 60
void fillArray(int arr[SIZE][SIZE]) {
    std::srand(std::time(0)); // Инициализация генератора случайных чисел

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            arr[i][j] = rand() % 31 + 30; // Генерация случайного числа от 30 до 60
        }
    }
}

// Функция для нахождения максимального элемента в массиве
int findMaxElement(const int arr[SIZE][SIZE]) {
    int maxElement = arr[0][0];

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

    return maxElement;
}

// Функция для нахождения минимального элемента в массиве
int findMinElement(const int arr[SIZE][SIZE]) {
    int minElement = arr[0][0];

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (arr[i][j] < minElement) {
                minElement = arr[i][j];
            }
        }
    }

    return minElement;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int array[SIZE][SIZE];

    // Заполнение массива случайными числами
    fillArray(array);

    // Вывод массива
    std::cout << "Двумерный массив:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << array[i][j] << "\t";
        }
        std::cout << "\n";
    }

    // Нахождение и вывод максимального элемента
    int maxElement = findMaxElement(array);
    std::cout << "Максимальный элемент в массиве: " << maxElement << "\n";

    // Нахождение и вывод минимального элемента
    int minElement = findMinElement(array);
    std::cout << "Минимальный элемент массива: " << minElement << "\n";

    system("pause");
    return 0;
}
