#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    printf("%d\n", time(NULL));
    srand(time(NULL));

    printf("%d\n",1 + (rand()%10));
    return 0;
}
//TEMA A ESTUDIAR
//GENERAR NUMEROS ALEATORIOS
//rand() % 10 + 1; //genera un número aleatorio entre 1 y 10

