#include <iostream>

int main(void) {
    // int A, B;
    // std::cin >> A >> B;
    // std::string S;

    // int sum = A + B;
    // S = std::to_string(sum);
    // std::cout << size(S) << std::endl;
    // return 0;

    std::string S;
    std::cin >> S;

    int o_count = 0;

    for (int i = 0; i < size(S); i++) {
        if (S[i] == 'o') {
            o_count++;
        }
    }

    if (o_count % 2 == 0) {
        std::cout << "even" << std::endl;
    }
    else {
        std::cout << "odd" << std::endl;
    }



}