#include <iostream>
#include <vector>

int main(void) {
    int N, Q;
    std::cin >> N >> Q;

    std::vector<int> card_stack(N);
    for (int i = 1; i <= N; i++) {
        card_stack.at(i - 1) = i;
    }

    std::vector<int> K(Q);
    for (int i = 0; i < Q; i++) {
        std::cin >> K.at(i);
    }

    for (int i = 0; i < Q; i++) {
        std::vector<int> buffer(K.at(i));
        for (int j = 0; j < K.at(i); j++) {
            buffer.at(j) = card_stack.at(j);
        }

        for (int j = 0; j < K.at(i); j++) {
            card_stack.at(j) = -buffer.at(K.at(i) - 1 - j);
        }
    }

    for (int i = 0; i < N; i++) {
        std::cout << card_stack.at(i) << std::endl;
    }

    
    return 0;
}