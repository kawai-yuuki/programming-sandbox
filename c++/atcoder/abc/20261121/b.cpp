#include <iostream>
#include <vector>
#include <string>
#include <array>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<char>> matrix(N, std::vector<char>(M));
    std::vector<int> first_x_positions;
    std::vector<int> second_x_positions;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> matrix.at(i).at(j);
            if (matrix.at(i).at(j) == 'x') {
                if (first_x_positions.empty()) {
                    first_x_positions.push_back(i);
                    first_x_positions.push_back(j);
                } else {
                    second_x_positions.push_back(i);
                    second_x_positions.push_back(j);
                }
            }
        }
    }

    if (first_x_positions.size() == 2 && second_x_positions.size() == 2) {
        int x1 = first_x_positions[0];
        int y1 = first_x_positions[1];
        int x2 = second_x_positions[0];
        int y2 = second_x_positions[1];

        if (x1 == x2) {
            std::cout << "Faucet " << x1 + 1 << std::endl;
        } 
        else if (y1 == y2) {
            std::cout << "Drain " << y1 + 1 << std::endl;
        }
    }

}