#include <iostream>

int main() {
    double base, altura;

    // Pedir al usuario la base y la altura del triángulo
    std::cout << "Ingrese la base del triángulo: ";
    std::cin >> base;
    std::cout << "Ingrese la altura del triángulo: ";
    std::cin >> altura;

    // Calcular el área del triángulo
    double area = (base * altura) / 2;

    // Mostrar el área del triángulo
    std::cout << "El área del triángulo es: " << area << std::endl;

    return 0;
}