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
    int key = 'K';
    bool running = true;

    while(running) {
    std::cout << "--- CipherLog System ---\n";
    std::cout << "1. Save a password\n";
    std::cout << "2. See saved password\n";
    std::cout << "3. Exit\n";
    std::cout << "Choose an option: ";
    std::cin >> option;
    std::cin.ignore();

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
        std::ofstream outFile("vault.dat", std::ios::app);
        if(outFile.is_open())
        {
            outFile << newEntry.site << std::endl;
            outFile << newEntry.password << std::endl;
            outFile.close();
            std::cout << "Saved Sucesfully.\n";
        }
        break;
        }

        case 2:
        {
        std::ifstream inFile("vault.dat");
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
                std::cout << "Password: " << line << "\n";
                isPassword = false;
            }
            else
            {
                std::cout << "site: " << line << "\n";
                isPassword = true;
            }
        }
        break;
        }
        case 3:
        {
            running = false;
            break;
        }
        default:
        std::cout << "Wrong option\n";
    }
    }
    return 0;
}