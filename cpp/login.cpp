#include <iostream>
#include <string>
#include <cstdlib>
void verify_user(std::string verifiedUser, std::string user);
void verify_password(std::string verifiedPassword, std::string password);
int main()
{
    std::string user;
    std::string password;
    std::string verifiedUser, verifiedPassword;
    std::cout << "Welcome, What´s your username?: ";
    std::cin >> user;
    std::cout << "Hello " << user << ", " << "What´s your password?: ";
    std::cin >> password;
    std::cout << "==Welcome to Log In.==\n";
    std::cout << "What was your username?: \n";
    std::cin >> verifiedUser;
    verify_user(verifiedUser, user);

    std::cout << "What was your password?: ";
    std::cin >> verifiedPassword;
    verify_password(verifiedPassword, password);

    return 0;
}

void verify_user(std::string verifiedUser, std::string user)
{
    if (verifiedUser == user)
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
