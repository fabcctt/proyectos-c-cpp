#include <iostream>
#include <cstring>
#include <cstdlib>
void verify_user(char verifiedUser [50], char user[50]);
void verify_password(std::string verifiedPassword, std::string password);
int main()
{
    char user [50];
    char verifiedUser [50];
    std::string password;
    std::string verifiedPassword;
    std::cout << "Welcome, Whats your username?: ";
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = 0;
    std::cout << "Hello " << user << ", " << "Whats your password?: ";
    std::cin >> password;
    std::cout << "==Welcome to Log In.==\n";
    std::cout << "What was your username?: \n";
    std::cin.ignore();
    fgets(verifiedUser, sizeof(verifiedUser), stdin);
    verifiedUser[strcspn(verifiedUser, "\n")] = 0;
    verify_user(verifiedUser, user);
    std::cout << "What was your password?: ";
    std::cin >> verifiedPassword;
    verify_password(verifiedPassword, password);

    return 0;
}

void verify_user(char verifiedUser [50], char user[50])
{
    if (strcmp(verifiedUser, user) == 0)
    {
        std::cout << "Correct username.\n";
    }
    else
    {
        std::cout << "Incorrect username.\n";
        std::exit(0);
    }
}
void verify_password(std::string verifiedPassword, std::string password)
{
    if (verifiedPassword == password)
    {
        std::cout << "Correct password.\n";
    }
    else
    {
        std::cout << "Incorrect password\n";
        std::exit(0);
    }
}