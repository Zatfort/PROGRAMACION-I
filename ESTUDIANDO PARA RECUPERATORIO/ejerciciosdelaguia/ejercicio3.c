#include <stdio.h>

// Función para verificar si un número es par
int verificarPar(int num) {
    if (num % 2 == 0) {
        return 1;  // Retorna 1 si el número es par
    } else {
        return 0;  // Retorna 0 si el número es impar
    }
}

int main() {
    int numero, suma = 0, contadorPares = 0;
    int bandera = 1;

    printf("Ingrese números positivos (ingrese -1 para finalizar):\n");

    // Bucle para recibir números del usuario
    while (bandera) {
        scanf("%d", &numero);

        if (numero == -1) {
            bandera = 0;  // Salir del bucle si se ingresa -1
        } else {
            // Sumar los dígitos del número
            int tempNumero = numero;
            int sumaDigitos = 0;

            while (tempNumero != 0) {
                sumaDigitos += tempNumero % 10;  // Extraer y sumar el último dígito
                tempNumero /= 10;  // Eliminar el último dígito
            }

            printf("Suma de los dígitos de %d es: %d\n", numero, sumaDigitos);

            // Verificar si el número es par
            if (verificarPar(numero)) {
                contadorPares++;
            }
        }
    }

    printf("La cantidad de números pares es: %d\n", contadorPares);

    return 0;
}