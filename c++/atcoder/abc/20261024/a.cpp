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
    int A, B;
    std::cin >> A >> B;
    std::string S;

    int sum = A + B;
    S = std::to_string(sum);
    std::cout << size(S) << std::endl;
    return 0;
}