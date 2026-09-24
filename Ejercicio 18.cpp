#include <iostream>

int main() {
    double num1, num2, num3;

 
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer número: ";
    std::cin >> num3;

  
    double mayor = num1;

    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }


    std::cout << "El mayor de los tres números es: " << mayor << std::endl;

    return 0;
}

