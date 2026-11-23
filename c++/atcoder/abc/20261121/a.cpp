#include <iostream>

int main() {
  int A, B;

  std::cin >> A >> B;

  if ((A > 0 && B > 0) || (A < 0 && B < 0)) {
    std::cout << "Yes" << std::endl;
  } else if ((A < 0 && B > 0) || (A > 0 && B < 0)) {
    std::cout << "No" << std::endl;
  }
}