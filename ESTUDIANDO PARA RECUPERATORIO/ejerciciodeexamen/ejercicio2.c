#include <stdio.h>

#include <string.h>

#include <stdlib.h>



//ejercicio 2

float calcularPromedio(int arr[]){
    int contador = 0;
    int i = 0;
    int suma = 0;

    for(i ;arr[i]!= 0;i++){
        suma = arr[i]+suma;
        contador++;
    }

    float promedio = suma / contador;


return promedio;
}

int main(){

    int arr[51] = {10,10,4,0};



    float calculo=calcularPromedio(arr);

    printf("Promedio: %.2f\n", calculo);



return 0;
}
