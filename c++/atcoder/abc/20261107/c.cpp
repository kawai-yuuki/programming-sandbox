#include <iostream>

int main(void) {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<int>> votes(M, std::vector<int>(2));
    for (int i = 0; i < M; i++) {
        std::cin >> votes.at(i).at(0) >> votes.at(i).at(1);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (votes.at(j).at(0) == i + 1) {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}