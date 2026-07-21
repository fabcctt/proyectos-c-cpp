#include <iostream>
#include <vector>
void bubbleSort(std::vector<int> &numbers) {
    int n = numbers.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}
int main() {
    std::vector<int> numbers = {1, 5, 2, 3, 7, 9, 4, 10, 6, 8};
    bubbleSort(numbers);
    for(int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    return 0;
}