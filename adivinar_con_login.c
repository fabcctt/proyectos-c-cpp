#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void Register();
void Log_In();
void Game();
int SecretNumber(void)
{
    return rand() % 100 + 1;
}

int main(void)
{
    char user[50];
    int password;
    int password_try;

    Register();
    printf("Welcome to the guessing game, what´s your user?: ");
    fgets(user, 50, stdin);
    user[strcspn(user, "\n")] = 0;
    printf("Welcome %s, what will be your password?: ", user);
    scanf("%d", &password);
    system("cls");

    Log_In();
    printf("Hello %s, what was you password to log in?: ", user);
    scanf("%d", &password_try);

    if (password_try == password)
    {
        system("cls");
    }
    else
    {
        printf("Wrong password.\n");
        return 1;
    }

    srand(time(NULL));
    char result;

    do
    {
        int guess = 0;
        int counter = 0;
        int secret = SecretNumber();
        game();
        while (guess != secret)
        {

            printf("Guess the number. (1 up to 100)): ");
            scanf("%d", &guess);
            counter++;
    
            if (guess == secret)
            {
                printf("You did it. The secret number was: %d\n", secreto, contador);
            }
            else
            {
                if (guess > secret)
                {
                    printf("High Number.\n");
                }
                else
                {
                    printf("Low Number.\n");
                }
            }
        }
        printf("You wanna play again? (y/n): ");
        scanf(" %c", &result);
    } while (result == 'y');
    return 0;
}
void Register()
{
    printf("=======Register=======\n");
}

void Iniciar_Sesion()
{
    printf("=======Log_In=======\n");
}

void Game()
{
    printf("=======Guessing number Game=======\n");
}
