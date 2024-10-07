#include <stdio.h>
#include <string.h>

int main() {
    int valores[51],num,pos = 0;
    printf("ingrese valor entero positivo,(0 para finalizar) \n");
    scanf("%d", &num);
    while(num != 0){
        valores[pos] = num;
        pos++;
        printf("ingrese valor entero positivo,(0 para finalizar) \n");
        scanf("%d", &num);
    }

    //mostar valores
    int pos=0;

    return 0;
}
