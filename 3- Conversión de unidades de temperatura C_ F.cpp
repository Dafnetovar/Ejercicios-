#include <iostream>
#include <string>

int main() {
    // Variables para almacenar la temperatura y la unidad
    double temperatura;
    char unidad;

    // Pedir al usuario que ingrese la temperatura y la unidad
    std::cout << "Ingrese la temperatura: ";
    std::cin >> temperatura;
    std::cout << "Ingrese la unidad (C para Celsius, F para Fahrenheit): ";
    std::cin >> unidad;

    // Realizar la conversión y mostrar el resultado
    if (unidad == 'C' || unidad == 'c') {
        double fahrenheit = (temperatura * 9/5) + 32;
        std::cout << "La temperatura en Fahrenheit es: " << fahrenheit << " F" << std::endl;
    } else if (unidad == 'F' || unidad == 'f') {
        double celsius = (temperatura - 32) * 5/9;
        std::cout << "La temperatura en Celsius es: " << celsius << " C" << std::endl;
    } else {
        std::cout << "Unidad no válida. Por favor, introduce C para Celsius o F para Fahrenheit." << std::endl;
    }

    return 0;
}