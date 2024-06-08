#include <iostream>
#include <string>

int main() {
    // Declarar la variable para almacenar el nombre del usuario
    std::string nombre_usuario;

    // Pedir al usuario su nombre
    std::cout << "Ingrese su nombre: ";
    std::getline(std::cin, nombre_usuario);

    // Mostrar un mensaje de saludo personalizado
    std::cout << "Hola! " << nombre_usuario << ", ¿cómo estás?" << std::endl;

    return 0;
}
