#include <iostream>
#include <vector>

int main(void)
{
    int N = 0;
    int M = 0;
    int count = 0;
    std::cin >> N >> M;

    std::vector<int> X(N) ;

    

    for (int i = 0; i < M; i++) {
        X.at(count) += 1;
        count++;
        if (count == N) {
            count = 0;
        }
    }

    

    for (int i = 0; i < N; i++) {
        std::cout << X.at(i);
        std::cout << std::endl;
    }
    
    return 0;
}