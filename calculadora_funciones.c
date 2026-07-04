#include <stdio.h>
float sum(float a, float b)
{
    return a + b;
}
float rest(float a, float b)
{
    return a - b;
}
float divide(float a, float b)
{
    return a / b;
}
float multiply(float a, float b)
{
    return a * b;
}

int main(void)
{
   int option;
   float num1, num2;

   printf("Choose the operation.\n");
   printf("1.Sum.\n");
   printf("2.Rest.\n");
   printf("3.Divide.\n");
   printf("4.Multiply.\n");
   scanf("%d", &option);

   if (option >= 1 && option <= 4)
   {
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (option) 
    {
        case 1:
        printf("Calculation: %.2f + %.2f: %.2f", num1, num2, sum(num1, num2));
        break;

        case 2:
        printf("Calculation: %.2f - %.2f: %.2f", num1, num2, rest(num1, num2));
        break;

        case 3:
        printf("Calculation: %.2f / %.2f: %.2f", num1, num2, divide(num1, num2));
        break;

        case 4:
        printf("Calculation: %.2f * %.2f: %.2f", num1, num2, multiply(num1, num2));
        break;
    }
   }
   else{
    printf("Wrong Option. Choose a number beetwen 1 up to 100.\n");
   }
    return 0;
}
