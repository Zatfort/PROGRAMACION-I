#include <stdio.h>
#include <string.h>


    #include <stdbool.h>

    bool es_primo(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }

    int frecuencia(int num, int digito) {
        int count = 0;
        while (num > 0) {
            if (num % 10 == digito) count++;
            num /= 10;
        }
        return count;
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

    int main() {
        int num, max_num = 0;
        while (1) {
            printf("Ingrese un número primo: ");
            scanf("%d", &num);
            if (!es_primo(num)) break;

            printf("Suma de sus dígitos: %d\n", suma_digitos(num));

            int digito;
            printf("Ingrese un dígito: ");
            scanf("%d", &digito);
            printf("Frecuencia del dígito %d en el número %d: %d\n", digito, num, frecuencia(num, digito));
            
            if (num > max_num) max_num = num;

        }
        printf("Factorial del mayor número ingresado: %d\n", factorial(max_num));
        return 0;
    }