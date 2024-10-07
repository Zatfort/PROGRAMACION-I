#include <stdio.h>
#include <stdlib.h>
int sumarDigitos(int n)
{
    int digito,suma=0;
    while(n>0){
        digito=n%10;
        suma=suma+digito;
        n=n/10;
   }
   return suma;
}
int main()
{
    int num;
    int contadorPares=0;
    printf("Ingrese un entero positivo (-1 para salir)\n");
    scanf("%d",&num);
    while(num!=-1){
        //proceso
        printf("%d",sumarDigitos(num));
        if(num%2==0)contadorPares++;
        printf("Ingrese un entero positivo (-1 para salir)\n");
        scanf("%d",&num);
    }
    printf("Se ingresaron %d numeros pares\n",contadorPares);
    return 0;
}
