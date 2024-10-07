#include <stdio.h>
#include <string.h>

int main() {
    
    // Definir una matriz de 5 filas y 7 columnas
    int matriz[5][7] = {

        {0,2,0,0,0,0,0,},
        {4,0,4,0,4,0,4,},
        {4,0,4,1,1,1,1,},
        {1,4,5,4,4,1,2,},
        {2,4,8,1,1,1,2,},

    };
    int coincidencias = 1;
    int ops= 0;

    // inicio la matriz 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%d ", matriz[i][j]);
            if (matriz[i][j] == matriz[i][j+1]) {
                coincidencias++;
            }else{
                coincidencias = 1;
            }
            if (coincidencias == 4 && matriz[i][j] != 0) ops=1;
        }
        printf("\n");  // Salto de línea después de cada fila
    }
    if(ops==1)  printf("\nGanador numero %d", matriz[0][0]);
    else printf("\n No hay ganador");       
    return 0;
}
