#include "dynamicArray.h"
#include <cassert>
#include <cstring>

DynamicArray createDynamicArrayWithCapacity(int capacity)
{
    return { new int[capacity], 0, capacity };
}

DynamicArray createDynamicArray()
{
    return createDynamicArrayWithCapacity(4);
}

void addElementToArray(DynamicArray* arr, int element)
{
    if (arr->length == arr->capacity)
    {
        int newCapacity = std::max(1, arr->capacity * 2);
        int* newData = new int[newCapacity];
        std::memcpy(newData, arr->data, arr->capacity * sizeof(int));
        delete[] arr->data;
        arr->data = newData;
        arr->capacity *= 2;
    }

    arr->data[arr->length++] = element;
}

int getElementAtIndex(DynamicArray* arr, int index)
{
    assert(index < arr->length);
    return arr->data[index];
}

std::span<int> getCurrentSpan(DynamicArray* arr)
{
    return { arr->data, arr->length };
}

void freeDynamicArray(DynamicArray* arr)
{
    delete[] arr->data;
}
