#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void sign_up();
void log_in();
void game();
int secretnumber(void)
{
    return rand() % 100 + 1;
}

int main(void)
{
    char user[50];
    int password;
    int password_try;

    sign_up();
    printf("Welcome to the guessing game, what´s your user?: ");
    fgets(user, 50, stdin);
    user[strcspn(user, "\n")] = 0;
    printf("Welcome %s, what will be your password?: ", user);
    scanf("%d", &password);
    system("cls");

    log_in();
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
        int secret = secretnumber();
        game();
        while (guess != secret)
        {

            printf("Guess the number. (1 up to 100)): ");
            scanf("%d", &guess);
            counter++;
    
            if (guess == secret)
            {
                printf("You did it. The secret number was: %d\n", secret);
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
void sign_up()
{
    printf("=======Sign Up=======\n");
}

void log_in()
{
    printf("=======Log In=======\n");
}

void game()
{
    printf("=======Guessing number Game=======\n");
}
