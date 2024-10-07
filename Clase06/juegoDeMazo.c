#include <stdio.h>
#include <string.h>

void verMazo(int mazo[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", mazo[i]);
    }
    printf("\n");
}

void crearMazo(int mazo[40]){
    for (int i = 0; i < 40; i++) {
        mazo[i] = i;
    }
}
void mezclarMazo(int mazo[40]){
    int aux,pos1,pos2;
    for (int i = 0; i < 40; i++) {
        int j = rand() % 40;
        int aux = mazo[i];
        mazo[i] = mazo[j];
        mazo[j] = aux;
    }
}

int main() {
    int mazo[40];
    crearMazo(mazo);
    verMazo(mazo);
    return 0;
}
