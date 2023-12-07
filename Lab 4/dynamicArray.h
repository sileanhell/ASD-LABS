#include <span> // Включаем заголовочный файл для std::span

struct DynamicArray // Объявляем структуру DynamicArray
{
    int* data; // Указатель на данные массива
    int length; // Текущее количество элементов в массиве
    int capacity; // Максимальное количество элементов, которое может вместить массив
};

// Объявляем функции, которые будут реализованы в dynamicArray.cpp
DynamicArray createDynamicArrayWithCapacity(int capacity);
DynamicArray createDynamicArray();
void addElementToArray(DynamicArray* arr, int element);
int getElementAtIndex(DynamicArray* arr, int index);
std::span<int> getCurrentSpan(DynamicArray* arr);
void freeDynamicArray(DynamicArray* arr);
