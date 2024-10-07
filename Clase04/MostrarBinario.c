#include <stdio.h>
#include <string.h>

void mostrarBinario(int numero ){
    int digito,resultado = 0,potencia = 1;

    while(numero > 0){
        digito = numero % 2;
        resultado = resultado + digito * potencia;
        numero = numero / 2;
        potencia = potencia*10;

        printf("numero binario %d\n",resultado );
    }
    

}
int main() {
    int numero;
    printf("ingrese un numero\n");
    scanf("%d",&numero);
    mostrarBinario(numero);
    
    return 0;
}
