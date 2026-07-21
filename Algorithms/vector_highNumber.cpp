#include <iostream>
#include <vector>
int main() {
    std::vector<int> numbers = {1, 4, 5, 9, 43, 4, 11, 31};
    int max = numbers[0];
    for(int i = 0; i < numbers.size(); i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }
    std::cout << max << std::endl;
    return 0;
}