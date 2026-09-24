{
    int numero;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

    if (numero >= 30 || numero < 0) {
        if (numero >= 30) {
            std::cout << "El numero es 30 o mayor." << std::endl;
        } else {
            std::cout << "El numero es negativo." << std::endl;
        }
    } else if (numero == 0) {
        std::cout << "cero" << std::endl;
    } else if (numero == 1) {
        std::cout << "unidad" << std::endl;
    } else {
        // Para números entre 2 y 29
        bool primo = esPrimo(numero);
        bool potDos = esPotenciaDeDos(numero);

        if (primo && potDos) {
            std::cout << "El numero es primo y tambien potencia de 2 (es el numero 2)." << std::endl;
        } else if (primo) {
            std::cout << "El numero es primo." << std::endl;
        } else if (potDos) {
            std::cout << "El numero es potencia de 2." << std::endl;
        } else {
            std::cout << "El numero es un numero compuesto." << std::endl;
        }
    }

    return 0;
}
