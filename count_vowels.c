#include <stdio.h>
#include <string.h>
int count_vowels(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a'
             || str[i] == 'e'
              || str[i] == 'i'
               || str[i] == 'o'
                || str[i] == 'u')
        count++;
    }
    return count;
}
int main(void)
{
    char word[20] = "Proggraming";
    int vowels;
    vowels = count_vowels(word);
    printf("%d", vowels);
    return 0;
}