print("Введите целое число")
number = int(input())

def int_to_roman(num):
    # Числовые значения, соответствующие римским числам
    arabic_numbers = [
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4,
        1
    ]
    roman_numbers = [
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV",
        "I"
    ]
    
    # Инициализация строки для римского представления числа
    roman_num = ''
    
    # Итерация по значениям и символам
    i = 0
    while num > 0:
        # Добавление соответствующих символов в римское представление числа
        for _ in range(num // arabic_numbers[i]):
            roman_num += roman_numbers[i]
            num -= arabic_numbers[i]
        i += 1
    
    # Возвращение римского представления числа
    return roman_num

roman_representation = int_to_roman(number)
print(f'Число {number} в римской системе счисления: {roman_representation}')
