// https://github.com/AntonC9018/uniCourse_dataStructuresAndAlgorithms/blob/master/ru/labs/lab2.md

#include <iostream>

int main() {
    int i = 69;
    int number = 72;

    i = 69 + 72;

    int array[3] = {0, 0, 0};

    int* iPointer = &i;

    // Считываем данные по адресу из указателя в переменную number
    number = *iPointer;

    // Вписываем в i через указатель значение 15
    *iPointer = 15;

    // Сменяем адрес в iPointer на первый элемент массива
    iPointer = &array[0];

    // Перемещаемся на 3 элемента массива, используя pointer arithmetic
    iPointer += 2; // Теперь iPointer указывает на третий элемент массива (нумерация с 0)

    // Вписываем в первый элемент массива напрямую значение 5
    array[0] = 5;

    // Вписываем в третий элемент массива через iPointer значение 6
    *iPointer = 6;

    // Выводим результаты на экран
    std::cout << "i: " << i << std::endl;
    std::cout << "number: " << number << std::endl;
    std::cout << "array[0]: " << array[0] << std::endl;
    std::cout << "array[2]: " << array[2] << std::endl;

    return 0;
}