#include <iostream>

int main(void) {
    int N;
    int papers;
    std::cin >> N;
    
    if (N % 2 == 0) {
        papers = N / 2;
    }
    else {
        papers = (N / 2) + 1;
    }

    std::cout << papers << std::endl;
    return 0;
}