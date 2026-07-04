#include <stdio.h>
int addition(int a, int b)
{
    return a + b;
}
int main(void)
{
   int answer, add;
   printf("How much is 5 + 5?\n");
   scanf("%d", &answer);
   add = addition(5, 5);

   if (answer == add)
   {
    printf("You did it. The answer was: %d\n", add);
   }
   else
   {
    printf("Wrong.\n");
   }

    return 0;
}
