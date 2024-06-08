#include <iostream>

int main() {
    double longitud_lado;

    // Pedir al usuario la longitud de un lado del cuadrado
    std::cout << "Ingrese la longitud de un lado del cuadrado: ";
    std::cin >> longitud_lado;

    // Calcular el perímetro del cuadrado
    double perimetro = 4 * longitud_lado;

    // Mostrar el perímetro del cuadrado
    std::cout << "El perímetro del cuadrado es: " << perimetro << std::endl;

    return 0;
}
