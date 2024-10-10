#include <stdio.h>
#include <stdbool.h>

// Función para determinar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;  // Los números menores o iguales a 1 no son primos
    }

    // Verificar si el número tiene divisores distintos de 1 y él mismo
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;  // Si se encuentra un divisor, el número no es primo
        }
    }
    return true;  // El número es primo si no se encontraron divisores
}

int main() {
    int numero;
    int contadorPrimos = 0;

    printf("Ingrese números mayores que 1 (ingrese 0 para finalizar):\n");

    while (1) {  // Bucle infinito que se romperá cuando se ingrese un cero
        scanf("%d", &numero);

        if (numero == 0) {
            break;  // Salir del bucle si se ingresa un 0
        }

        if (numero > 1 && esPrimo(numero)) {
            contadorPrimos++;  // Incrementar el contador si el número es primo
        }
    }

    printf("Cantidad de números primos ingresados: %d\n", contadorPrimos);

    return 0;
}
