#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(5, 30);
    std::cout << result << std::endl;
    std::cin.get();
}
