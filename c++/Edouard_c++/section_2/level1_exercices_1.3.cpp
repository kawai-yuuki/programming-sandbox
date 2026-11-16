#include <iostream>
#include <numeric>
#include <vector>

int main(void) {

    std::vector<float> numbers = {1.1, 2.2, 3.3, 4.4};

    float average = std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();

    std::cout << "The average of the numbers is: " << average << std::endl;
    return 0;
}