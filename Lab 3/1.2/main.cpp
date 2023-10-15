#include <iostream>

static int hello(int x);

int main() {
    int result = hello(42);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
