#include <stdio.h>

// Implementación del algoritmo de burbujeo
void burbuja(int arr[], int n) {
    int i, j;
    int intercambiado;
    
    for (i = 0; i < n - 1; i++) {
        intercambiado = 0; // Indica si se realizó algún intercambio

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar los elementos sin usar punteros
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                intercambiado = 1; // Se realizó un intercambio
            }
        }
        
        // Si no hubo intercambios, la lista ya está ordenada
        if (intercambiado == 0) {
            break;
        }
    }
}

// Función para imprimir el arreglo
void imprimirArreglo(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Arreglo original: \n");
    imprimirArreglo(arr, n);
    
    burbuja(arr, n);
    
    printf("Arreglo ordenado: \n");
    imprimirArreglo(arr, n);
    
    return 0;
}
