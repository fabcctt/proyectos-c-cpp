#include <iostream>
#include <string>
#include <fstream>
struct PasswordEntry {
    std::string site;
    std::string password;
};
int main(void)
{
    int option;
    char key = 'K';
    bool running = true;

    while(running)
    {
        std::cout << "========================" << std::endl;
        std::cout << "Welcome to CipherLog." << std::endl;
        std::cout << "========================" << std::endl;
        std::cout << "1.Save Password." << std::endl;
        std::cout << "2.See Password." << std::endl;
        std::cout << "3.Exit." << std::endl;
        std::cout << "========================" << std::endl;
        std::cout << "Choose an Option." << std::endl;
        if(!(std::cin >> option))
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Wrong Option. (Choose between 1 up to 3.)\n\n" << std::endl;
            continue;
        }
        std::cin.ignore(10000, '\n');
        
        switch(option)
        {
            case 1:
            {
                PasswordEntry newEntry;
                std::cout << "Site: "; std::getline(std::cin, newEntry.site);
                std::cout << "Password: "; std::getline(std::cin, newEntry.password);

                for(size_t i = 0; i < newEntry.password.length(); i++)
                {
                    newEntry.password[i] = newEntry.password[i] ^ key;
                }
                std::ofstream outFile("name.txt", std::ios::app);
                if(outFile.is_open())
                {
                    outFile << newEntry.site << std::endl;
                    outFile << newEntry.password << std::endl;
                    outFile.close();
                    std::cout << "Saved Sucesfully." << std:: endl;
                }
            break;
            }
            case 2:
            {
            std::ifstream inFile("name.txt");
            std::string line;
            bool isPassword = false;
            while(std::getline(inFile, line))
            {
                if(isPassword)
                {
                    for(size_t i = 0; i < line.length(); i++)
                    {
                        line[i] = line[i] ^ key;
                    }
                    std::cout << "Password: " << line << std::endl;
                    std::cout << "------------------\n";
                }
                else
                {
                    std::cout << "------------------\n";
                    std::cout << "Site: " << line << std::endl;
                }
                isPassword = !isPassword;
            }

            break;
            }
            case 3:
            {
            running = false;
            break;
            }
            default:
            {
                std::cout << "Wrong Number.\n\n" << std::endl;
            }
        }
    }
    return 0;
}