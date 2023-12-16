﻿/*
Написать программу, которая определяет максимальное число
из введённой с клавиатуры последовательности положительных чисел
(длина последовательности неограниченна)
*/


#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    // Объявление переменных для хранения текущего числа и максимального числа
    double currentNumber, maxNumber = -1;

    // Ввод чисел и определение максимального с использованием do while
    std::cout << "Введите последовательность положительных чисел. Для завершения введите отрицательное число.\n";

    do {
        std::cout << "Введите число: ";
        std::cin >> currentNumber;

        // Проверка на отрицательное число для завершения ввода
        if (currentNumber < 0) {
            break;
        }

        // Проверка на положительное число и обновление максимального, если необходимо
        if (currentNumber > maxNumber) {
            maxNumber = currentNumber;
        }

    } while (true);

    // Вывод результата
    if (maxNumber >= 0) {
        std::cout << "Максимальное число из введенной последовательности: " << maxNumber << "\n";
    }
    else {
        std::cout << "Положительные числа не введены.\n";
    }

    system("pause");
    return 0;
}
