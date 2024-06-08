#include <iostream>

int main() {
    double num1, num2;
    char operador;
    std::cout << "Ingrese el num 1: ";
    std::cin >> num1;
    std::cout << "Ingrese el num 2: ";
    std::cin >> num2;
    std::cout << "Ingrese el operador (+, -, *, /): ";
    std::cin >> operador;

    switch (operador) {
        case '+':
            std::cout << "El resultado es: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "El resultado es: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "El resultado es: " << num1 * num2 << std::endl;
            break;
        case '/':
            if(num2 != 0.0)
                std::cout << "El resultado es: " << num1 / num2 << std::endl;
            else
                std::cout << "Error: División por cero." << std::endl;
            break;
        default:
            std::cout << "Operador no válido." << std::endl;
    }

    return 0;
}