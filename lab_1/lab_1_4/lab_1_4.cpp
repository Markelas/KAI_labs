/*Условие*/

/*
Проверить на чётность введённое с клавиатуры число
*/

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    // Объявление переменной для хранения введенного числа
    int number;

    // Ввод числа
    std::cout << "Введите число: ";
    std::cin >> number;

    // Проверка на четность
    if (number % 2 == 0) {
        std::cout << "Число " << number << " является четным.\n";
    }
    else {
        std::cout << "Число " << number << " является нечетным.\n";
    }

    system("pause");
    return 0;
}
