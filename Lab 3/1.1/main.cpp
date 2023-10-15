#include <iostream>

int hello(int value) {
    return value;
}

int main() {
    int result = hello(42);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
