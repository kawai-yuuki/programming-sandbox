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
    int Q;
    std::cin >> Q;
    std::vector<std::string> query(Q);
    std::vector<int> id(Q);

    for (int i = 0; i < Q; ++i) {
        std::cin >> query.at(i);
    }
    // std::vector<int> s = {};
    // for (int i = 0; i < Q; ++i) {
    //     std::cout << query.at(i) << std::endl;
    // }

    int counter = 1;
    for (int i = 0; i < Q; ++i) {
        
        for (int j = 0; j < i; ++j) {
            if (query.at(j) == query.at(i)) {
                id.at(i) = id.at(j);
                break;
            }
            counter++;
        }
        id.at(i) = counter;
    }

    for (int i = 0; i < Q; ++i) {
        std::cout << id.at(i) << std::endl;
    }

    return 0;
}