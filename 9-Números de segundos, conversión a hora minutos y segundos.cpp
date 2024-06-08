#include <iostream>

int main() {
    int total_segundos, horas, minutos, segundos;

    // Pedir al usuario el número total de segundos
    std::cout << "Ingrese el número total de segundos: ";
    std::cin >> total_segundos;

    // Calcular horas, minutos y segundos
    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    // Mostrar el resultado en horas, minutos y segundos
    std::cout << "Equivalente a: " << horas << " horas, " << minutos << " minutos y " << segundos << " segundos." << std::endl;

    return 0;
}