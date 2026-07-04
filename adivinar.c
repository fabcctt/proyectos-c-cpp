#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int secret = rand() % 100 + 1, guess = 0, counter = 0;

    while (guess != secret)
    {
        printf("Choose a number. (1 up to 100)\n");
     scanf("%d", &guess);
     counter++;

     if (guess == secret)
      {
        printf("Correct number. The number was: %d\n", counter);
      }
     else
      {
        if (guess > secret)
        {
            printf("You entered a High number. Try again\n");
        }
        else
        {
            printf("You entered a Low number.\n");
        }
      }
    }
    return 0;
}
