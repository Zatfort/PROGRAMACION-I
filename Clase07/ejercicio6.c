#include <stdio.h>
#include <string.h>
//ejercicio 6
int main() {
    int num;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &num);

    if (num > 0) {
        for (int i = num; i < 2 * num; i++) {
            printf("%d\n", i);
        }
    };
}
