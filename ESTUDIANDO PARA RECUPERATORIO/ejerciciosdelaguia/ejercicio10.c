#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int sumarDigitos(int arr[],int longitudArr){
    int numeroTemporal;

    for(int i = 0;i<longitudArr;i++){
        int sumaDigitos = 0;
        numeroTemporal = arr[i];
       while(numeroTemporal != 0){
        sumaDigitos += numeroTemporal%10;
        numeroTemporal /=10;
       }
       printf("suma de los digitos de %d es: %d\n",arr[i],sumaDigitos);
    }


return 0;
}
int sumarTotal(int arr[],int longitudArr){
    int suma = 0;
    for(int i = 0;i<longitudArr;i++){
        suma += arr[i];
    }
    printf("suma total %d\n",suma);
return 0;
}

int main (){
    int array[50];
    int numero = 111;
    int contador = 0;

    while(numero != 0){
        printf("ingrese numeros: \n");
        scanf("%d",&numero);
        array[contador] = numero;
        contador++;
    }

    sumarTotal(array,contador);
    sumarDigitos(array,contador);
return 0;
}
