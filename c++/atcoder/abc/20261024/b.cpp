#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <utility>
#include <tuple>
#include <functional>
#include <numeric>
#include <limits>
#include <cmath>
#include <iomanip>
#include <cassert>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <bitset>
#include <random>
#include <chrono>
#include <thread>
#include <filesystem>
#include <regex>
#include <sstream>
#include <fstream>
#include <array>
#include <list>
#include <deque>
#include <forward_list>
#include <valarray>
#include <complex>
#include <locale>
#include <codecvt>
#include <atomic>
#include <condition_variable>
#include <mutex>


int main(void) {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> A(N);
    int counter = 0;
    for (int i = 0; i < N; ++i) {
        std::cin >> A.at(i);
    }

    for (int i = 0; i <= N; ++i) {
        if(A.at(i) < K && K <= A.at(i + 1) || A.at(i) > K && K >= A.at(i + 1)) {
            counter++;
            break;
        }
    }
    std::cout << counter << std::endl;
    return 0;
}