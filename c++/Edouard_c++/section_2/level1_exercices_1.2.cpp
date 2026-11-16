#include <iostream>

int main(void) {
    int a, b;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "The sum of " << a << " and " << b << " is " << a + b << std::endl;
    return 0;
}