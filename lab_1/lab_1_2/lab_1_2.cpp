﻿/*
Написать программу, которая проверяет является ли год високосным.
*/


#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    // Объявление переменной для хранения введенного года
    int year;

    // Ввод года
    std::cout << "Введите год: ";
    std::cin >> year;

    // Проверка на високосность
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " год является високосным.\n";
    }
    else {
        std::cout << year << " год не является високосным.\n";
    }

    system("pause");
    return 0;
}
