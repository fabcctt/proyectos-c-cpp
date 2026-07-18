#include <stdio.h>
int main(void)
{
  int option;
  float num1, num2;

  printf("Choose your operation.\n");
  printf("1. Sum\n");
  printf("2. Rest\n");
  printf("3. Divide\n");
  printf("4. Multiplicate\n");
  scanf("%d", &option);

  if (option >= 1 && option <= 4)
  {
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the first number: ");
    scanf("%f", &num2);

    switch (option)
    {
        case 1:
        printf("Calculation: %.2f + %.2f: %.2f.\n", num1, num2, num1 + num2);
        break;

        case 2:
        printf("Calculation: %.2f - %.2f: %.2f.", num1, num2, num1 - num2);
        break;

        case 3:
        printf("Calculation: %.2f / %.2f: %.2f.", num1, num2, num1 / num2);
        break;

        case 4:
        printf("Calculation: %.2f . %.2f: %.2f.", num1, num2, num1 * num2);
    }
  }
    else
    {
      printf("Wrong Option, Choose a number between 1 up to 100. \n");
    }
    return 0;
}
