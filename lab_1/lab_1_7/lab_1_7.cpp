﻿/*
Написать программу, которая выводит таблицу значений
функции y=-2 * x^2 - 5 * x - 8
в диапазоне от –4 до +4, с шагом 0,5
*/



#include <iostream>

int main() {
    // Вывод заголовка таблицы
    std::cout << "x\t\t y\n";

    // Инициализация начального значения x
    double x = -4.0;

    // Расчет и вывод значений функции в заданном диапазоне с шагом 0.5, используя while
    while (x <= 4.0) {
        double y = -2 * x * x - 5 * x - 8;
        std::cout << x << "\t\t " << y << "\n";

        // Увеличение x на шаг 0.5
        x += 0.5;
    }

    system("pause");
    return 0;
}