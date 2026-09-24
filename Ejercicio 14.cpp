#include <iostream>

int main() {
	int a, b, c;

	std::cout << "Ingrese el primer numero entero: ";
	std::cin >> a;
	std::cout << "Ingrese el segundo numero entero: ";
	std::cin >> b;
	std::cout << "Ingrese el tercer numero entero: ";
	std::cin >> c;

	// Verifica si están en orden creciente o decreciente
	if ((a <= b && b <= c) || (a >= b && b >= c)) {
		std::cout << "Los numeros estan en orden numerico." << std::endl;
	} else {
		std::cout << "Los numeros NO estan en orden numerico." << std::endl;
	}

	return 0;
}
