#include <stdio.h>
#include <string.h>

// ingresar una frase y una letra y verificar si la letra esta en la frase
int main() {

    char frase[100];
    char letra;
    int i = 0;
    int encontrado = 0;
    printf("Ingrese una frase: ");
    gets(frase);
    printf("Ingrese una letra: ");
    scanf("%c", &letra);
    for (i = 0 ; i < strlen(frase); i++) {

        if(frase[i] != letra) {
            printf("la letra %c no esta en la frase\n", letra);
            printf("posicion: %d\n", i);}
        }
        else{
            printf("encontre la letra");
            return 0;
        }
       
        // if (frase[i] == letra) {
        //     encontrado = 1;
        //     printf("la letra %c esta en la frase\n", letra);
        //     printf("posicion: %d\n", i);
        // }
    }
    

   
}
