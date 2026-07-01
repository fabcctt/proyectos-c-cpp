#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int secreto = rand() % 100 + 1, intento = 0, contador = 0;

    while (intento != secreto)

        printf("Escoja un numero (1 al 100)\n");
    scanf("%d", &intento);
    contador++;

    if (intento == secreto)
    {
        printf("Acertastes, numero de intentos: %d\n", contador);
    }
    else
    {
        if (intento > secreto)
        {
            printf("Numero Alto.\n");
        }
        else
        {
            printf("Numero Bajo.\n");
        }
    }

    return 0;
}