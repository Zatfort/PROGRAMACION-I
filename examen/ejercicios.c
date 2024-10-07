#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NOTAS 50

void cargarNotas(int notas[]) {
    int nota, i = 0;
    printf("Ingrese las notas del alumno (0 para terminar):\n");
    while (i < MAX_NOTAS) {
        printf("Nota %d: ", i + 1);
        scanf("%d", &nota);
        if (nota == 0) {
            break;
        }
        if (nota >= 1 && nota <= 10) {
            notas[i++] = nota;
        } else {
            printf("Nota invalida. Ingrese una nota entre 1 y 10.\n");
        }
    }
    notas[i] = 0; // Indicar el fin de los datos válidos
}

void mostrarNotas(int notas[]) {
    int i = 0;
    printf("Notas del alumno:\n");
    while (notas[i] != 0 && i < MAX_NOTAS) {
        printf("%d ", notas[i]);
        i++;
    }
    printf("\n");
}

int main() {
    int notas[MAX_NOTAS + 1]; // +1 para el 0 que indica el fin de los datos válidos
    cargarNotas(notas);
    mostrarNotas(notas);
    return 0;
}