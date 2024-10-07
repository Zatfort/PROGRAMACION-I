#include <stdio.h>
#include <string.h>


    int esPrimo(int n){
        int contador = 0;
        for(int div = 1; div <= n; div++){
            if(n % div == 0){
                contador++;
            }
        }
        if(contador == 2){
            return 1;
        }
        else{
            return 0;
        }
    }

 

    int suma_digitos(int num) {
        int suma = 0;
        while (num > 0) {
            suma += num % 10;
            num /= 10;
        }
        return suma;
    }

    int factorial(int num) {
        if (num == 0) return 1;
        int fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }

    int frecuencia(int numeroIngresado, int digito){
        int frecuencia = 0;
        while (numeroIngresado > 0){
            if (numeroIngresado % 10 == digito){
                frecuencia++;
            }
            numeroIngresado /= 10;
        }
        return frecuencia;
    }

    int main() {
        int num = 0;
        int bandera = 1;
        while (bandera) {
            printf("ingrese un numero primo: ");
            scanf("%d", &num);
            if (!es_primo(num)) bandera = 0;
            printf("suma de los digitos: %d\n", suma_digitos(num));

            int digito;
            printf("ingrese un digito: ");
            scanf("%d", &digito);
            printf("frecuencia del digito %d en el número %d: %d\n", digito, num, frecuencia(num, digito));
        }
        return 0;
    }
