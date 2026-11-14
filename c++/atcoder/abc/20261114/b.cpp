#include <iostream>
#include <vector>

int main(void) {
    int K;
    std::cin >> K;

    std::vector<int> A(K);
    for (int i = 0; i < K; i++) {
        std::cin >> A[i];
    }

    int min_ball_number = 10;
    bool nine_ball_exists = false;

    for (int i = 0; i < K; i++) {
        if (A[i] < min_ball_number) {
            min_ball_number = A[i];
        }

        if (A[i] == 9) {
            nine_ball_exists = true;
        }
    }

    if (nine_ball_exists) {
        std::cout << min_ball_number << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }
}