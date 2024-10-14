#include <stdio.h>

#include <string.h>

#include <stdlib.h>



//ejercicio 1


int cargarNotas(int arr[]){
    int notas;
    int contador = 0;
    while(notas != 0){
        printf("Ingrese nota 1-10 (0 para finalizar)\n");
        scanf("%d",&notas);
        if(notas >= 1 && notas <= 10 ){
                arr[contador]= notas;
                contador++;
        }else if(notas == 0){
            printf("Fin de la carga. Las notas son: ");
        }
        else{
            printf("Error. Ingrese nota 1-10 (0 para finalizar)\n");
        }
    }
return contador;
}


int mostrarNotas(int cantidadNotas,int array[]){

    for(int i = 0; i < cantidadNotas;i++){
        printf("%d ",array[i]);
    }

    return 0;
}

int main(){
    int array[50];
    int cantidadNotas;
    
    cantidadNotas= cargarNotas(array);
    
    mostrarNotas(cantidadNotas,array);

    return 0;
}
