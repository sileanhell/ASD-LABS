#include "dynamicArray.h" // Включаем заголовочный файл с объявлением DynamicArray и функций
#include <cassert> // Включаем заголовочный файл для assert
#include <cstring> // Включаем заголовочный файл для memcpy

DynamicArray createDynamicArrayWithCapacity(int capacity)
{
    // Создаем новый DynamicArray с заданной вместимостью
    // Выделяем память под данные массива
    // Изначально массив пуст, поэтому length равна 0
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
        // Выделяем новую память
        int* newData = new int[arr->capacity * 2];
        // Копируем старые данные в новую память
        std::memcpy(newData, arr->data, arr->capacity * sizeof(int));
        // Освобождаем старую память
        delete[] arr->data;
        // Обновляем указатель на данные и вместимость
        arr->data = newData;
        arr->capacity *= 2;
    }

    // Добавляем новый элемент в конец массива
    arr->data[arr->length++] = element;
}

int getElementAtIndex(DynamicArray* arr, int index)
{
    // Проверяем, что индекс не выходит за пределы массива
    assert(index < arr->length);
    // Возвращаем элемент по индексу
    return arr->data[index];
}

std::span<int> getCurrentSpan(DynamicArray* arr)
{
    // Возвращаем текущий кусок массива как std::span
    return { arr->data, arr->length };
}

void freeDynamicArray(DynamicArray* arr)
{
    // Освобождаем память, выделенную под данные массива
    delete[] arr->data;
}
