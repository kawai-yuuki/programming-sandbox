#include <iostream>

int main(void)
{
    std::string c = "";
    std::cin >> c;

    if (c[0] == 'B') {
        c = 'Y';
    }
    else if (c[0] == 'Y') {
        c = 'R';
    }
    else {
        c = 'B';
    }

    std::cout << c << std::endl;
    return 0;
}