#include <stdio.h>
#include <stdlib.h>
int esPrimo(int n)
{
    int cumple=1;
    if(n==1)cumple=0; //esto es para que el 1 diga que NO es primo
    for(int divisor= 2;divisor <n;divisor ++)
    {
        if(n%divisor==0)cumple=0;
    }
   return cumple;
}
int main()
{
    int num;
    int contadorPrimos=0;
    printf("Ingrese un entero positivo (0 para salir)\n");
    scanf("%d",&num);
    while(num!=0){
        //proceso
        if(esPrimo(num)){
            contadorPrimos++;
            printf("Es primo\n");
        }
        else printf("No es primo\n");
        //contadorPrimos=contadorPrimos+esPrimo(num);
        printf("Ingrese un entero positivo (0 para salir)\n");
        scanf("%d",&num);
    }
    printf("Se ingresaron %d numeros primos\n",contadorPrimos);
    return 0;
}
