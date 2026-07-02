#include <iostream>
#include <string>
#include <cstdlib>
void verificar_usuario(std::string usuarioVerificado, std::string usuario);
void verificar_contrasenia(std::string contraseniaVerificada, std::string contrasenia);
int main()
{
    std::string usuario;
    std::string contrasenia;
    std::string usuarioVerificado, contraseniaVerificada;
    std::cout << "Bienvenido, cual es su usuario\n";
    std::cin >> usuario;
    std::cout << "Hola " << usuario << ", " << "Cual es su contrasenia\n";
    std::cin >> contrasenia;
    std::cout << "==Bienvenido al inicio de sesion==\n";
    std::cout << "Cual era su usuario\n";
    std::cin >> usuarioVerificado;
    verificar_usuario(usuarioVerificado, usuario);

    std::cout << "Cual era su contrasena\n";
    std::cin >> contraseniaVerificada;
    verificar_contrasenia(contraseniaVerificada, contrasenia);

    return 0;
}

void verificar_usuario(std::string usuarioVerificado, std::string usuario)
{
    if (usuarioVerificado == usuario)
    {
        std::cout << "Usuario correcto.\n";
    }
    else
    {
        std::cout << "Usuario Incorrecto.\n";
        std::exit(0);
    }
}
void verificar_contrasenia(std::string contraseniaVerificada, std::string contrasenia)
{
    if (contraseniaVerificada == contrasenia)
    {
        std::cout << "Contrasena correcta.\n";
    }
    else
    {
        std::cout << "Contrasena incorecta.\n";
        std::exit(0);
    }
}