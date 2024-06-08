#include <iostream>

int main() {
    double peso, altura;

    // Pedir al usuario su peso en kilogramos
    std::cout << "Ingrese su peso en kilogramos: ";
    std::cin >> peso;

    // Pedir al usuario su altura en metros
    std::cout << "Ingrese su altura en metros: ";
    std::cin >> altura;

    // Verificar que la altura sea mayor que cero para evitar división por cero
    if(altura > 0) {
        // Calcular el IMC
        double imc = peso / (altura * altura);

        // Mostrar el IMC
        std::cout << "Su Índice de Masa Corporal (IMC) es: " << imc << std::endl;
    } else {
        std::cout << "La altura debe ser mayor que cero." << std::endl;
    }

    return 0;
}