#include <span>

struct DynamicArray
{
    int* data; // Указатель на начало буферa
    int length; // Указатель на данные массива
    int capacity; // Текущее количество элементов в массиве
};

DynamicArray createDynamicArrayWithCapacity(int capacity);
DynamicArray createDynamicArray();
void addElementToArray(DynamicArray* arr, int element);
int getElementAtIndex(DynamicArray* arr, int index);
std::span<int> getCurrentSpan(DynamicArray* arr);
void freeDynamicArray(DynamicArray* arr);
