#include <stdio.h>
#include <string.h>
#include <math.h>

// segundo ejercicio

void main() {
    int numero;
    int base = 8;
    int potencia = 1;
    int resultado = 0;
    int resto;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    while ( numero > 0){
        resto = numero % base;
        resultado = resultado + resto * potencia;
        potencia = potencia * 10;
        numero = numero / base;
    }
    printf("El numero en octal es: %d\n", resultado);

}