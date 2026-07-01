#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void Registrar();
void Iniciar_Sesion();
void Juego();
int numeroSecreto(void)
{
    return rand() % 100 + 1;
}

int main(void)
{
    char usuario[50];
    int contrasenia;
    int intento_contrasenia;

    Registrar();
    printf("Bienvenido al juego de adivinar numero, cual sera su usuario?: ");
    fgets(usuario, 50, stdin);
    usuario[strcspn(usuario, "\n")] = 0;
    printf("Bienvenido %s, cual sera la contrasenia?: ", usuario);
    scanf("%d", &contrasenia);
    system("cls");

    Iniciar_Sesion();
    printf("Hola %s, cual es su contrasenia para ingresar?: ", usuario);
    scanf("%d", &intento_contrasenia);

    if (intento_contrasenia == contrasenia)
    {
        system("cls");
    }
    else
    {
        printf("Contrasenia incorrecta.\n");
        return 0;
    }

    srand(time(NULL));
    char resultado;

    do
    {
        int intento = 0;
        int contador = 0;
        int secreto = numeroSecreto();
        Juego();
        while (intento != secreto)
        {

            printf("Adivina el numero (1 al 100): ");
            scanf("%d", &intento);
            contador++;
    
            if (intento == secreto)
            {
                printf("Acertastes. El numero era %d, Intentastes: %d veces.\n", secreto, contador);
            }
            else
            {
                if (intento > secreto)
                {
                    printf("Numero Alto.\n");
                }
                else
                {
                    printf("Numero bajo.\n");
                }
            }
        }
        printf("Quieres jugar otra vez? (s/n): ");
        scanf(" %c", &resultado);
    } while (resultado == 's');
    return 0;
}
void Registrar()
{
    printf("=======Registrar=======\n");
}

void Iniciar_Sesion()
{
    printf("=======Iniciar_Sesion=======\n");
}

void Juego()
{
    printf("=======Juego de adivinar numero=======\n");
}