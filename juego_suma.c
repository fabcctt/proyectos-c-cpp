#include <stdio.h>
int sumar(int a, int b)
{
    return a + b;
}
int main(void)
{
   int respuesta, suma;
   printf("Cuanto es 5 + 5?\n");
   scanf("%d", &respuesta);
   suma = sumar(5, 5);

   if (respuesta == suma)
   {
    printf("Acertastes, El resultado es %d", suma);
   }
   else
   {
    printf("Errastes.\n");
   }

    return 0;
}