// https://github.com/AntonC9018/uniCourse_dataStructuresAndAlgorithms/blob/master/ru/labs/lab2.md

#include <stdlib.h>
#include <iostream>

// Определение структуры TwoInts
struct TwoInts
{
    int a;
    int b;
};

// Определение структуры StructWithArray
struct StructWithArray
{
    int arr[4];
    int* someNumber;
};

int main()
{
    // Создание объекта TwoInts и инициализация его значением по умолчанию (оба поля будут 0)
    TwoInts i2 = { };
    // Присвоение значений полям a и b
    i2.a = 5;
    i2.b = 7;
    // Вывод значений полей a и b в консоль
    std::cout << i2.a << std::endl; // Вывод: 5
    std::cout << i2.b << std::endl; // Вывод: 7

    // Создание объекта StructWithArray и инициализация его значениями по умолчанию (все элементы массива arr будут 0)
    StructWithArray s = { };
    // Присвоение значения первому элементу массива arr
    s.arr[0] = 10;
    // Создание еще одного объекта StructWithArray и инициализация его значениями по умолчанию
    StructWithArray s1 = { };
    // Присвоение значения первому элементу массива arr в новом объекте
    s1.arr[0] = 15;
    // Создание указателя на объект StructWithArray и присвоение ему адреса первого объекта
    StructWithArray* sPointer = &s;
    // Изменение значения первого элемента массива arr через указатель
    sPointer->arr[0] = 20;
    // Вывод значения первого элемента массива arr через объект s
    std::cout << s.arr[0] << std::endl; // Вывод: 20
    // Изменение значения первого элемента массива arr через объект s
    s.arr[0] = 25;
    // Вывод значения первого элемента массива arr через объект s
    std::cout << s.arr[0] << std::endl; // Вывод: 25
    // Изменение значения первого элемента массива arr через указатель
    sPointer->arr[0] = 30;
    // Вывод значения первого элемента массива arr через объект s
    std::cout << s.arr[0] << std::endl; // Вывод: 30
    // Изменение указателя на объект StructWithArray
    sPointer = &s1;
    // Изменение значения первого элемента массива arr через указатель
    sPointer->arr[0] = 35;
    // Вывод значения первого элемента массива arr через объект s
    std::cout << s.arr[0] << std::endl; // Вывод: 30 (не изменилось)
    // Вывод значения первого элемента массива arr через объект s1
    std::cout << s1.arr[0] << std::endl; // Вывод: 35

    // Создание массива из двух объектов StructWithArray и инициализация их значениями по умолчанию
    StructWithArray structArray[2] = { };
    // Присвоение значения последнему элементу массива arr в первом объекте
    structArray[0].arr[3] = 77;
    // Присвоение указателю значение адреса последнего элемента массива arr в первом объекте
    structArray[1].someNumber = &structArray[0].arr[3];
    // Присвоение указателю адреса последнего элемента массива arr в объекте s
    sPointer = &s;
    // Создание указателя на int и присвоение ему адреса последнего элемента массива arr в объекте, на который указывает sPointer
    int* pointer = &sPointer->arr[3];
    // Изменение значения последнего элемента массива arr в объекте s
    s.arr[3] = 72;
    // Вывод значения, на которое указывает указатель pointer
    std::cout << *pointer; // Вывод: 72

    // Создание объекта StructWithArray и заполнение его нулями с использованием функции memset
    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));

    return 0;
}
