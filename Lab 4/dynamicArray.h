#include <span>

struct DynamicArray
{
    int* data;
    int length;
    int capacity;
};

DynamicArray createDynamicArrayWithCapacity(int capacity);
DynamicArray createDynamicArray();
void addElementToArray(DynamicArray* arr, int element);
int getElementAtIndex(DynamicArray* arr, int index);
std::span<int> getCurrentSpan(DynamicArray* arr);
void freeDynamicArray(DynamicArray* arr);
