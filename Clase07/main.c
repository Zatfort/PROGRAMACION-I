#include <stdio.h>
#include <string.h>

int esPrimo(int a){
    int cumple = 1;
    for(int divisor = 2; divisor < a; divisor++){
        if(a % divisor == 0){
            cumple = 0;
        }
    }
    return cumple;


}

int main() {
    int numero;
    int contadorPrimo = 0;
    printf("Ingrese un numero entero positivo (0 para salir): ");
    scanf("%d", &numero);
    while(numero != 0){
        
        if(esPrimo(numero)){
            contadorPrimo++;
            //contadorPrimo = contadorPrimo + esPrimo(numero); otra forma de sumar el contador
            printf("El numero %d es primo\n", numero);
        }
        else{
            printf("El numero %d no es primo\n", numero);
        }

        printf("Ingrese un numero entero positivo (0 para salir): ");
        scanf("%d", &numero);
    }

    return 0;
}
