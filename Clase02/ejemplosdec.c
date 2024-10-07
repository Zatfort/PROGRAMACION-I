#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    //el menos uno"-1" es para que sepa que ya termino
    int a[20] = {1, 2, 3,-1};	
    
    printf("Hola mundo\n");
    return 0;
}
*/

/*
%c Caracter = char
%d Entero = int
%f Flotante = float
*/

/*
void imprimir(int a[]){
    int i = 0;
    while(a[i] != -1){
        printf("%d\n", a[i]);
        i++;
    }
}
*/

/*
void main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    //printf("La suma es: %d\n", a+b);
    printf("%d + %d = %d\n", a, b, a+b);

    
}
*/
/*
void main(){
    int a,b;
    scanf("%d+%d", &a, &b);
    printf("%d + %d = %d",a,b,a+b);

}
*/

void main(){
    char letra;

    scanf("%c",&letra);
    fflush(stdin);
    printf("%c",letra);

}