#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    //  トッピングの個数
    int N = 0;
    //  価格の総和
    int W = 0;
    std::cin >> N >> W;

    std::vector<int> A(N);
    std::vector<int> B(N);

    for (int i = 0; i < N; i++) {
        std::cin >> A.at(i);
        std::cin >> B.at(i);
    }

    int dp[N][W];

    for (int w = 0; w <= W; w++) {
        dp[0][w] = 0;
    }

    for (int i = 0; i < N; i++) {
        for (int w = 0; w <= W; w++) {
            if (w >= B.at(i)) {
                dp[i + 1][w] = std::max(dp[i][w - B.at(i)] + A.at(i), dp[i][w]);
            }
            else {
                dp[i + 1][w] = dp[i][w];
            }
        }
    }

    std::cout << dp[N][W] << std::endl;
    
    return 0;
}