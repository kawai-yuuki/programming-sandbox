#include <iostream>
#include <vector>

int main(void)
{
    int N = 0;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A.at(i);
    }

    int sum = 0;

    for (int i = 0; i < N; i++) {
        if ((i + 1) % 2 == 1) {
            sum += A.at(i);
        }
    }
    

    std::cout << sum << std::endl;
    
    return 0;
}