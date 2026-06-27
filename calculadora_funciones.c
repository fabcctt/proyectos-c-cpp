#include <stdio.h>
float sumar(float a, float b)
{
    return a + b;
}
float restar(float a, float b)
{
    return a - b;
}
float dividir(float a, float b)
{
    return a / b;
}
float multiplicar(float a, float b)
{
    return a * b;
}

int main(void)
{
   int opcion;
   float num1, num2;

   printf("Escoje la operacion.\n");
   printf("1.Sumar\n");
   printf("2.Restar.\n");
   printf("3.Dividir\n");
   printf("4.Multiplicar\n");
   scanf("%d", &opcion);

   if (opcion >= 1 && opcion <= 4)
   {
    printf("Ingrese el primer numero.\n");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero.\n");
    scanf("%f", &num2);

    switch (opcion) 
    {
        case 1:
        printf("Calculo: %.2f + %.2f: %.2f", num1, num2, sumar(num1, num2));
        break;

        case 2:
        printf("Calculo: %.2f - %.2f: %.2f", num1, num2, restar(num1, num2));
        break;

        case 3:
        printf("Calculo: %.2f / %.2f: %.2f", num1, num2, dividir(num1, num2));
        break;

        case 4:
        printf("Calculo: %.2f * %.2f: %.2f", num1, num2, multiplicar(num1, num2));
        break;
    }
   }
   else{
    printf("Opcion Invalida. (Escoje 1 al 4)\n");
   }
    return 0;
}