#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    //  トッピングの個数
    int N = 0;
    //  価格の総和
    int V = 0;
    std::cin >> N >> V;

    std::vector<int> W(N) ;

    for (int i = 0; i < N; i++) {
        std::cin >> W.at(i);
    }

    //  嬉しさの最大値を記録する変数。初期値は-1とする
    long long max_happiness = -1;

    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            for (int k = j + 1; k <= N; k++) {

                //  インデックスの合計がV以下かチェック
                if (i + j + k <= V) {
                    long long current_happiness = W.at(i - 1) + W.at(j - 1) + W.at(k - 1);

                    if (current_happiness > max_happiness) {
                        max_happiness = current_happiness;
                    }
                }
            }
        }
    }
    

    std::cout << max_happiness << std::endl;
    
    return 0;
}