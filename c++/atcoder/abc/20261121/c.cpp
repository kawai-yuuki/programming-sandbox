#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int N;
  std::cin >> N;

  std::vector<int> C(N);
  for (int i = 0; i < N; i++) {
    std::cin >> C.at(i);
  }

  std::vector<int> output(N, 1000000000);

  for (int i = 1; i < N; i++) {
    if (C.at(i) != C.at(i - 1)) {
      output.at(i) = 1;
    } else if (C.at(i) == C.at(i - 1)) {
      output.at(i) = std::min(output.at(i), output.at(i - 1) + 1);
    }
  }

  for (int i = N - 2; i >= 0; i--) {
    if (C.at(i) != C.at(i + 1)) {
      output.at(i) = 1;
    } else if (C.at(i) == C.at(i + 1)) {
      output.at(i) = std::min(output.at(i), output.at(i + 1) + 1);
    }
  }

  for (int i = 0; i < N; i++) {
    std::cout << output.at(i) << " ";
  }
  std::cout << std::endl;
}