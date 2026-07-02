#include <iostream>
#include <string>
using namespace std;

void verificar_usuario(string usuarioVerificado, string usuario);
void verificar_contrasenia(string contraseniaVerificada, string contrasenia);

int main()

{

    string usuario;

    string contrasenia;

    string usuarioVerificado, contraseniaVerificada;

    cout << "Bienvenido, cual es su usuario\n";

    cin >> usuario;

    cout << "Hola " << usuario << ", " << "Cual es su contrasenia\n";

    cin >> contrasenia;

    cout << "==Bienvenido al inicio de sesion==\n";

    cout << "Cual era su usuario\n";

    cin >> usuarioVerificado;

    verificar_usuario(usuarioVerificado, usuario);

    cout << "Cual era su contrasena\n";

    cin >> contraseniaVerificada;

    verificar_contrasenia(contraseniaVerificada, contrasenia);

    return 0;
}

void verificar_usuario(string usuarioVerificado, string usuario)

{

    if (usuarioVerificado == usuario)

    {

        cout << "Usuario correcto.\n";
    }

    else

    {

        cout << "Usuario Incorrecto.\n";
        exit(0);
    }
}

void verificar_contrasenia(string contraseniaVerificada, string contrasenia)

{

    if (contraseniaVerificada == contrasenia)

    {

        cout << "Contrasena correcta.\n";
    }

    else

    {

        cout << "Contrasena incorecta.\n";
        exit(0);
    }
}

