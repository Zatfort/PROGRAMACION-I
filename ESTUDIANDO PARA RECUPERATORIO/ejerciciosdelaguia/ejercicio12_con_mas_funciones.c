#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float promedioDeLasNotas(int arr[]){
    int contador = 0;
    int suma = 0;
    while(arr[contador]!=0){
            suma += arr[contador];
            contador++;
    }
    float promedio = suma / contador;
    return promedio;
}

void eliminarNota(int arr[],int num){
    int posicion = 0;
    // Encontrar la primera aparición de 'num'
    while(arr[posicion]!=0 && arr[posicion]!=num){
        posicion++;
    }
    // Si se encontró, eliminarlo
    if(arr[posicion]==num){
        while(arr[posicion]!=0){
            arr[posicion]= arr[posicion+1];
            posicion++;
        }
    }else{
        printf("no fue encontrado");
    }

}
// Función para mostrar las notas
void mostrar(int arr[]){
    int posicion=0;
    while(arr[posicion]!=0){
        printf("%d ",arr[posicion]);
        posicion++;
    }
    printf("\n");
}


int cargarNotas(int arr[]){
    int nota,contador = 0;

    while(nota != 0){
        printf("ingrese notas del 1 al 10 (0 para finalizar)\n");
        scanf("%d",&nota);

        if(nota >=1 && nota <=10){
            arr[contador] = nota;
            contador++;
        }else if(nota == 0){
            printf("fin de la carga, las notas son: \n");

        }else{
            printf("error,ingrese notas 1-10(0 para finalizar)\n");
        }
    }
    arr[contador] = 0;
    return 0;
}
int main(){
    int array[50];
    //cargar notas al array[50] y terminar con un 0
    cargarNotas(array);
    //mostrar notas ingresadas
    mostrar(array);

    //funcion eliminar una nota(numero) del array
    int numero;
    printf("Ingrese un numero a eliminar de la lista \n");
    scanf("%d",&numero);
    // funcion eliminar nota del array con los numeros ingresados
    eliminarNota(array,numero);

    //mostrar notas eliminadas
    mostrar(array);
    //funcion promedio de notas ingresadas a un array
    float promedio =promedioDeLasNotas(array);
    printf("promedio %.2f",promedio);

    return 0;
}
