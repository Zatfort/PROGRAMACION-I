#include <stdio.h>
#include <string.h>
/*
int main() {
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    if (numero < 0) {
        numero *= -1;
    }

    printf("El valor absoluto del numero es: %d\n", numero);
    return 0;
}
*/
/*  

hacer con while

int main(){
    int i;
    char vocales[5] = {'a','e','i','o','u'};
    char letra;
    printf("escriba una letra: ");
    scanf("%c",&letra);
    for ( i = 0; i < 5; i++)
    {
        if (letra == vocales[i])
        {
            printf("Es una vocal\n");
            break;
        }else{
            printf("No es una vocal\n");
            break;
        }
    }

}
*/

/*
void main(){
    int i;
    char vocales[5] = {'a','e','i','o','u'};
    char letra;
    printf("escriba una letra: ");
    scanf("%c",&letra);

}
*/


void main(){
    char letra[100]= "";
    printf("Escriba una letra: ");
    scanf("%s",letra);

    while(strlen(letra) != 1){
        printf("error, escriba una letra: ");
        scanf("%s",letra);

        
        
    }
    if(letra[0] == 'a' || letra[0] == 'e' || letra[0] == 'i' || letra[0] == 'o' || letra[0] == 'u'){
            printf("Es una vocal\n");
        }else{
            printf("No es una vocal\n");
        }
}

