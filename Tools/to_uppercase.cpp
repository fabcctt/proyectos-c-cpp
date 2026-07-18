#include <iostream>
#include <string>
void to_uppercase(std::string &str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
    }
}
int main(void)
{
    std::string word = "hello";
    to_uppercase(word);
    std::cout << word;
    return 0;
}
