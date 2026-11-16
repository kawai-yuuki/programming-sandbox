#include <iostream>

int main(void) {
    std::string name;
    std::cout << "Your name: ";
    std::cin >> name;

    int age;
    std::cout << "Your age: ";
    std::cin >> age;

    std::cout << "Your name is " << name << std::endl;
    std::cout << "Your age is " << age << std::endl;
    return 0;
}