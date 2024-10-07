#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mostrarNotas(int cantidad,int array[]){
    printf("sus notas ingresadas\n");
    for (int i = 0; i<cantidad; i++)
    {
        printf("%d,",array[i]);
    }
    
    return 0;
}

int cargarNotas(int array[]){
    int numero;
    int contador = 0;
    printf("ingrese las notas del 1 a 10(0 para terminar): \n");
    
    while (numero != 0)
    {
        scanf("%d",&numero);
        if (numero >= 1 && numero <= 10)
        {
            array[contador] = numero;
            contador++;
        }else if(numero == 0){
            numero = 0;

        }else{
            printf("ingrese un numero valido \n");
        }
    }
    return contador;
}

int main() {
    int arr[50];
    int cantidadNotas = cargarNotas(arr);

    mostrarNotas(cantidadNotas,arr);

    return 0;
}














/*
    int array[50];  // Declarar un array de 50 elementos
    int i = 0, num;

    printf("Ingresa hasta 50 números enteros (ingresa 0 para terminar):\n");

    // Ciclo para ingresar datos hasta 50 veces o hasta que se ingrese 0
    while (num != 0) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        array[i] = num;  // Guardar el número en el array
        i++;
    }

    // Mostrar los números ingresados
    printf("Has ingresado los siguientes números:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", array[j]);
    }

*/