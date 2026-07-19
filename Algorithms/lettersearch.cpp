#include <iostream>
#include <string>
#include <cctype>
int main() {
    std::string text;
    char letter;
    bool isletter = false;

    std::cout << "Enter your text: ";
    getline(std::cin, text);
    std::cout << "Enter the letter: ";
    std::cin >> letter;

    char lowerLetter = tolower(letter);

    for(int i = 0; i < text.length(); i++) {
        if (tolower(text[i]) == lowerLetter) {
            isletter = true;
            break;
        }
    }
    if (isletter) {
        std::cout << "The letter '" << letter << "' its on the text.";
    }
    else {
        std::cout << "The letter '" << letter << "' is not in the text.";
    }
    return 0;
}