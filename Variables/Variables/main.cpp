#include <iostream>

int main() {
    // There are two kinds of variables, signed and unsigned.
    // char, short, int, long, float, double
    unsigned int score = 0;
    float pi = 3.1415f;
    std::cout << score << std::endl;
    std::cout << pi << std::endl;
    std::cout << "The size of an char is " << sizeof(char) << " bytes." << std::endl;
    std::cout << "The size of an short is " << sizeof(short) << " bytes." << std::endl;
    std::cout << "The size of an int is " << sizeof(int) << " bytes." << std::endl;
    std::cout << "The size of an long is " << sizeof(long) << " bytes." << std::endl;
    std::cout << "The size of an float is " << sizeof(float) << " bytes." << std::endl;
    std::cout << "The size of an double is " << sizeof(double) << " bytes." << std::endl;
    std::cin.get();
}
