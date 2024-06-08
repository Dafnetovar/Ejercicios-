#include <iostream>

int main() {
    double lado;

    // Pedir al usuario la longitud del lado del cuadrado
    std::cout << "Ingrese la longitud del lado del cuadrado: ";
    std::cin >> lado;

    // Calcular el área del cuadrado
    double area = lado * lado;

    // Mostrar el área del cuadrado
    std::cout << "El área del cuadrado es: " << area << std::endl;

    return 0;
}
