#include <iostream>
#include <bits/stdc++.h>

int main(void)
{
    int N = 0;
    int D = 0;
    std::cin >> N >> D;

    std::vector<int> X(N);
    for (int i = 0; i < N; i++) {
        std::cin >> X.at(i);
    }

    

    std::cout << N << D << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << X.at(i);
    }
    std::cout << std::endl;
    return 0;
}