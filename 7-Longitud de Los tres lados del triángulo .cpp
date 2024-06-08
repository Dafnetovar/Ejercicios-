#include <iostream>

int main() {
    double lado1, lado2, lado3;

    // Pedir al usuario la longitud de los tres lados del triángulo
    std::cout << "Ingrese la longitud del primer lado del triángulo: ";
    std::cin >> lado1;
    std::cout << "Ingrese la longitud del segundo lado del triángulo: ";
    std::cin >> lado2;
    std::cout << "Ingrese la longitud del tercer lado del triángulo: ";
    std::cin >> lado3;

    // Calcular el perímetro del triángulo
    double perimetro = lado1 + lado2 + lado3;

    // Mostrar el perímetro del triángulo
    std::cout << "El perímetro del triángulo es: " << perimetro << std::endl;

    return 0;
}