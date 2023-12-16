/*Условие*/

/*
Написать программу, которая выводит таблицу квадратов десяти первых положительных чисел.
*/


#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    // Вывод заголовка таблицы
    std::cout << "Число\tКвадрат\n";

    // Вывод квадратов десяти первых положительных чисел
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << "\t" << i * i << "\n";
    }

    system("pause");
    return 0;
}
