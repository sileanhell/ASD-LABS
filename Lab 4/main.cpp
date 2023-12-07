#include "dynamicArray.h" // Включаем заголовочный файл с объявлением DynamicArray и функций
#include <cassert> // Включаем заголовочный файл для assert

void test1()
{
    // Создаем массив с вместимостью 10 и проверяем, что вместимость действительно 10
    DynamicArray arr = createDynamicArrayWithCapacity(10);
    assert(arr.capacity == 10);
    // Освобождаем память
    freeDynamicArray(&arr);
}

void test2()
{
    // Создаем массив с дефолтной вместимостью и проверяем, что он изначально пуст
    DynamicArray arr = createDynamicArray();
    assert(arr.length == 0);
    // Добавляем элемент и проверяем, что длина массива увеличилась
    addElementToArray(&arr, 5);
    assert(arr.length == 1);
    // Освобождаем память
    freeDynamicArray(&arr);
}

void test3()
{
    // Создаем массив с вместимостью 1
    DynamicArray arr = createDynamicArrayWithCapacity(1);
    // Добавляем элемент и проверяем, что вместимость не изменилась
    addElementToArray(&arr, 5);
    assert(arr.capacity == 1);
    // Добавляем еще один элемент и проверяем, что вместимость увеличилась в два раза
    addElementToArray(&arr, 10);
    assert(arr.capacity == 2);
    // Добавляем еще один элемент и проверяем, что вместимость снова увеличилась в два раза
    addElementToArray(&arr, 20);
    assert(arr.capacity == 4);
    // Освобождаем память
    freeDynamicArray(&arr);
}

void test4()
{
    // Создаем массив и добавляем элемент
    DynamicArray arr = createDynamicArray();
    addElementToArray(&arr, 5);
    // Получаем элемент по индексу и проверяем, что это тот элемент, который мы добавили
    int el = getElementAtIndex(&arr, 0);
    assert(el == 5);
    // Освобождаем память
    freeDynamicArray(&arr);
}

void test5()
{
    // Создаем массив и добавляем три элемента
    DynamicArray arr{};
    addElementToArray(&arr, 5);
    addElementToArray(&arr, 6);
    addElementToArray(&arr, 7);

    // Получаем текущий кусок массива как std::span
    std::span<int> span = getCurrentSpan(&arr);

    // Проверяем, что размер span равен количеству добавленных элементов
    assert(span.size() == 3);
    // Проверяем, что элементы span совпадают с добавленными элементами
    assert(span[0] == 5);
    assert(span[1] == 6);
    assert(span[2] == 7);
    // Освобождаем память
    freeDynamicArray(&arr);
}

int main()
{
    // Выполняем все тесты
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}
