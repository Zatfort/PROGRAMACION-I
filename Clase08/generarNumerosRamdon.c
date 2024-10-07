#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializar la semilla para la generación de números aleatorios
    srand(time(0));

    // Generar un número aleatorio entre -10 y 40
    int random_number = (rand() % 51) - 10;

    // Imprimir el número aleatorio
    printf("Número aleatorio entre -10 y 40: %d\n", random_number);

    return 0;
}