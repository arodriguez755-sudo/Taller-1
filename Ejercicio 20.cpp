#include <iostream>

int main() {
    double nota;
    std::cout << "Introduce la nota: ";
    if (!(std::cin >> nota)) {
        std::cout << "Entrada no válida." << std::endl;
        return 1;
    }

    if (nota >= 0 && nota < 5.0) {
        std::cout << "Suspenso" << std::endl;
    } else if (nota >= 5.0 && nota < 6.5) {
        std::cout << "Aprobado" << std::endl;
    } else if (nota >= 6.5 && nota < 8.5) {
        std::cout << "Notable" << std::endl;
    } else if (nota >= 8.5 && nota < 10.0) {
        std::cout << "Sobresaliente" << std::endl;
    } else if (nota == 10.0) {
        std::cout << "Matrícula de honor" << std::endl;
    } else {
        std::cout << "Nota fuera de rango válido (0 a 10)." << std::endl;
    }

    return 0;
}

