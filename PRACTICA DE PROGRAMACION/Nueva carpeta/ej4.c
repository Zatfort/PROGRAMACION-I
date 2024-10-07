#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[101],letra;
    printf("Ingrese una frase!\n");
    gets(texto);
    //solicitar una letra
    printf("Ingrese una letra!\n");
    scanf("%c",&letra);
    //recorrer el texto caracter por caracter
    for(int i=0;i<strlen(texto);i++)
    {
        //si en la posicion i no se encuentra la letra
        if(texto[i]!=letra){
            // muestra i y dice que no hay coincidencia
            printf("No hay coincidencia en la posicion %d\n", i);
        }
        else{
                //en caso contrario, el programa termina.
            printf("Encontré la letra");
            //i=strlen(texto);
            return 0;
        }
    }
}
