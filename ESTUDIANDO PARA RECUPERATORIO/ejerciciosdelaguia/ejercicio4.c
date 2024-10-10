#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//ejercicio 4


int main(){
    char frase[100];
    char letra;
    printf("ingrese una frase: \n");
    gets(frase);

    printf("ingrese una letra: ");
    scanf("%c",&letra);

    int longitud = strlen(frase);

    for(int i = 0;i<longitud;i++){

        if(frase[i]== letra){
            printf("la %c se encuentra en la frase, posicion %d \n",letra,i);
        }else{
            printf("no esta en la frase, posicion %d \n",i);
        }
    }

return 0;
}
//
