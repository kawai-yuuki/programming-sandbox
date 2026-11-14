#include <iostream>
#include <vector>

int main(void) {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::vector<int> B(N);
    for (int i = 0; i < N; i++) {
        std::cin >> B[i];
    }

    int move_element = 0;
    int start_A_iterator = 0;
    int start_B_iterator = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            if (A[i] == B[i + 1]) {
                move_element = B[i];
                start_A_iterator = i;
                start_B_iterator = i + 1;
                break;

            }
            else if (A[i + 1] == B[i]) {
                move_element = A[i];
                start_A_iterator = i + 1;
                start_B_iterator = i;
                break;
            }
            else {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
    }

    for (int i = start_A_iterator > start_B_iterator ? start_B_iterator : start_A_iterator; i < N; i++) {
        if (A[i] != B[i]) {
            if (A[i] == move_element || A.back() == move_element) {
                start_A_iterator = i + 1;
                start_B_iterator = i;
                break;
            }
            else if (B[i] == move_element || B.back() == move_element) {
                start_A_iterator = i;
                start_B_iterator = i + 1;
                break;
            }
            else {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
    }
    
    for (int i = start_A_iterator; i < N; i++) {
        if (A[i] != B[i]) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }

    std::cout << "Yes" << std::endl;

    return 0;
}