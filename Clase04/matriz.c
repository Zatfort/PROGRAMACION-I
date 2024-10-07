#include <stdio.h>
#include <string.h>

//matrizes

int main() {
    int matrix [2] [3] = {
        {1,2,3},
        {6,8,0},
    };

    printf("%d %d %d \n", matrix[0] [0], matrix[0] [1], matrix[0] [2]);
    printf("%d %d %d \n", matrix[1] [0], matrix[1] [1], matrix[1] [2]);

    //problema: imprimir la matriz completa
    int filas = 2, columnas = 3;

    for(int fila = 0; fila < filas;fila++){
        for(int columna = 0; columna < columnas; columna++){
            printf("%d ", matrix[fila][columna]);
        }
        printf("\n");

    }

  return 0;
}