// https://github.com/AntonC9018/uniCourse_dataStructuresAndAlgorithms/blob/master/ru/labs/lab2.md

#include <stdlib.h>
#include <iostream>

// Определение структуры TwoInts с двумя целыми числами a и b
struct TwoInts
{
    int a;
    int b;
};

// Определение структуры StructWithArray с массивом arr и указателем someNumber
struct StructWithArray
{
    int arr[4];
    int* someNumber;
};

int main()
{
    // Создание экземпляра TwoInts с именем i2 и инициализация нулями
    TwoInts i2 = { };

    // Установка значения a в 5 и b в 7
    i2.a = 5;
    i2.b = 7;

    // Вывод значения a и b на консоль
    std::cout << i2.a << std::endl;
    std::cout << i2.b << std::endl;

    // Создание экземпляра StructWithArray с именем s и инициализация нулями
    StructWithArray s = { };

    // Установка значения первого элемента массива arr в 10
    s.arr[0] = 10;

    // Создание еще одного экземпляра StructWithArray с именем s1 и инициализация нулями
    StructWithArray s1 = { };

    // Установка значения первого элемента массива arr в 15
    s1.arr[0] = 15;

    // Создание указателя sPointer и его инициализация указателем на s
    StructWithArray* sPointer = &s;

    // Установка значения первого элемента массива arr через указатель
    sPointer->arr[0] = 20;

    // Вывод значения первого элемента массива arr из s на консоль
    std::cout << s.arr[0] << std::endl;

    // Изменение значения первого элемента массива arr из s
    s.arr[0] = 25;

    // Вывод измененного значения на консоль
    std::cout << s.arr[0] << std::endl;

    // Изменение значения первого элемента массива arr из sPointer (который указывает на s)
    sPointer->arr[0] = 30;

    // Вывод измененного значения на консоль
    std::cout << s.arr[0] << std::endl;

    // Изменение указателя sPointer, чтобы он указывал на s1
    sPointer = &s1;

    // Изменение значения первого элемента массива arr из sPointer (который теперь указывает на s1)
    sPointer->arr[0] = 35;

    // Вывод значения первого элемента массива arr из s и s1 на консоль
    std::cout << s.arr[0] << std::endl;
    std::cout << s1.arr[0] << std::endl;

    // Создание массива структур StructWithArray с именем structArray и инициализация нулями
    StructWithArray structArray[2] = { };

    // Установка значения третьего элемента массива arr в 77
    structArray[0].arr[3] = 77;

    // Установка указателя someNumber на адрес третьего элемента массива arr
    structArray[1].someNumber = &structArray[0].arr[3];

    // Восстановление sPointer, чтобы он указывал на s
    sPointer = &s;

    // Создание указателя pointer, который указывает на четвертый элемент массива arr из sPointer (s)
    int* pointer = &sPointer->arr[3];

    // Установка значения четвертого элемента массива arr из s в 72
    s.arr[3] = 72;

    // Вывод значения, на которое указывает pointer, на консоль
    std::cout << *pointer;

    // Создание экземпляра StructWithArray с именем memory и заполнение его нулями с помощью memset
    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));

    // Возврат 0, завершение функции main
    return 0;
}
