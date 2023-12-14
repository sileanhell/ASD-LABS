#include "dynamicArray.h"
#include <cassert>
#include <cstring>

DynamicArray createDynamicArrayWithCapacity(int capacity)
{
    // Создаем новый DynamicArray с заданной вместимостью
    return { new int[capacity], 0, capacity };
}

DynamicArray createDynamicArray()
{
    // Создаем новый DynamicArray с дефолтной вместимостью 4
    return createDynamicArrayWithCapacity(4);
}

void addElementToArray(DynamicArray* arr, int element)
{
    // Если массив полон, увеличиваем его вместимость в два раза
    if (arr->length == arr->capacity)
    {
        int newCapacity = (arr->capacity == 0) ? 1 : arr->capacity * 2;
        int* newData = new int[newCapacity];
        std::memcpy(newData, arr->data, arr->capacity * sizeof(int));
        delete[] arr->data;
        arr->data = newData;
        arr->capacity = newCapacity;
    }

    // Добавляем новый элемент в конец массива
    arr->data[arr->length++] = element;
}

int getElementAtIndex(DynamicArray* arr, int index)
{
    assert(index < arr->length);
    return arr->data[index];
}

std::span<int> getCurrentSpan(DynamicArray* arr)
{
    // Возвращаем текущий кусок массива как std::span
    return { arr->data, arr->length };
}

void freeDynamicArray(DynamicArray* arr)
{
    delete[] arr->data;
}
