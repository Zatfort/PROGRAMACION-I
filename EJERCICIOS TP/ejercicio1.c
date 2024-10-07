#include <stdio.h>
#include <string.h>

int main() {
    int num;
    printf("ingrese un numero: \n");
    scanf("%d", &num);
    if (num > 0){
        printf("el numero es positivo : %d \n", num);
    }else if (num < 0){
        printf("el numero es negativo : %d \n", num);
        num *= -1;
        printf("el numero ahora es positivo : %d \n", num);}
    return 0;
}
