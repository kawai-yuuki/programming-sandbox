#include <iostream>
#include <vector>

int main(void)
{
    int N = 0;
    std::cin >> N;

    std::string S;
    std::cin >> S;

    int rain_count = 0;
    int max_rain_days = 0;
    
    for (int i = 0; i < N; i++) {
        if (S.at(i) == 'R') {
            rain_count += 1;
        }
        else {
            if (max_rain_days < rain_count) {
                max_rain_days = rain_count;
            }
            rain_count = 0;
        }

    }

    if (max_rain_days < rain_count) {
        max_rain_days = rain_count;
    }

    std::cout << max_rain_days << std::endl;
    
    return 0;
}