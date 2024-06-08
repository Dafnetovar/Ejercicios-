#include <iostream>

int main() {
    double radio;

    // Pedir al usuario el radio del círculo
    std::cout << "Ingrese el radio del círculo: ";
    std::cin >> radio;

    // Calcular la circunferencia del círculo
    double circunferencia = 2 * 3.14159265358979323846 * radio;

    // Mostrar la circunferencia del círculo
    std::cout << "La circunferencia del círculo es: " << circunferencia << std::endl;

    return 0;
}