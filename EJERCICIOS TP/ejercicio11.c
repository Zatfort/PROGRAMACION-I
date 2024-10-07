#include <stdio.h>
#include <string.h>

int main() {

    char letra;
    printf("Ingrese una letra: ");
    scanf(" %c", &letra);

    char vocales[] = "aeiou";

    int longitud = strlen(vocales);

    printf("longitud de la cadena: %d\n", longitud);

    return 0;
}
