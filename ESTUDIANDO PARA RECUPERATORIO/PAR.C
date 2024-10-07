#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int verificarPar(int num){
    if (num%2==0)
    {
        printf("es par \n");
    }else{
        printf("no es par");
    }

    return 0;
    
}
int main (){
    int numero;

    printf("ingrese un numero: ");
    scanf("%d",&numero);

    verificarPar(numero);

    return 0;

}