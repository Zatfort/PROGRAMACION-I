#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    void eliminar(int arr[], int num) {
        int i = 0;
        while (arr[i] != 0) {
            if (arr[i] == num) {
                int j = i;
                while (arr[j] != 0) {
                    arr[j] = arr[j + 1];
                    j++;
                }
                break;
            }
            i++;
        }
    }

    int main() {
        int arr[] = {1, 2, 3, 4, 5, 0};
        int num = 3;

        printf("Array before deletion: ");
        for (int i = 0; arr[i] != 0; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        eliminar(arr, num);

        printf("Array after deletion: ");
        for (int i = 0; arr[i] != 0; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        return 0;
    }
    


    return 0;
}
