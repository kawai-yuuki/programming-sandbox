#include <iostream>
#include <string>
#include <vector>
#include <tuple>

int main(void) {

    // std::string S;
    // std::cin >> S;

    // int o_count = 0;

    // for (int i = 0; i < size(S); i++) {
    //     if (S[i] == 'o') {
    //         o_count++;
    //     }
    // }

    // if (o_count % 2 == 0) {
    //     std::cout << "even" << std::endl;
    // }
    // else {
    //     std::cout << "odd" << std::endl;
    // }

    // std::vector <std::vector<char>> S(5, std::vector<char>(5, '.'));
    // std::vector <std::vector<char>> S_transpose(5, std::vector<char>(5, '.'));

    // std::vector <int> blank_count(12);

    // int min_blank_count = 5;

    

    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         std::cin >> S[i][j];
    //     }
    // }

    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         if (S[i][j] == '.') {
    //             blank_count[i]++;
    //         }
    //     }
    // }

    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         S_transpose[i][j] = S[j][i];
    //     }
    // }

    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         if (S_transpose[i][j] == '.') {
    //             blank_count[i + 5]++;
    //         }
    //     }
    // }

    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         if (i == j) {
    //             if (S[i][j] == '.') {
    //                 blank_count[10]++;
    //             }
    //         }
    //     }
    // }

    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         if (i + j == 4) {
    //             if (S[i][j] == '.') {
    //                 blank_count[11]++;
    //             }
    //         }
    //     }
    // }

    // for (int i = 0; i < 12; i++) {
    //     if (blank_count[i] < min_blank_count) {
    //         min_blank_count = blank_count[i];
    //     }
    // }

    // std::cout << min_blank_count << std::endl;

    int H, W, N, Q;
    std::cin >> H >> W >> N >> Q;

    std::vector <std::vector<bool>> grid(H, std::vector<bool>(W, false));
    std::vector <std::vector<bool>> grid_transpose(W, std::vector<bool>(H, false));

    std::vector <int> R(N);
    std::vector <int> C(N);

    std::vector <std::tuple<int, int, int>> queries(Q);

    for (int i = 0; i < N; i++) {
        std::cin >> R[i] >> C[i];
    }

    for (int i = 0; i < Q; i++) {
        std::cin >> std::get<0>(queries[i]) >> std::get<1>(queries[i]) >> std::get<2>(queries[i]);
    }

    for (int i = 0; i < N; i++) {


}