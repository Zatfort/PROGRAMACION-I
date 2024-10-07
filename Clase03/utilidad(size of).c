#include <stdio.h>
#include <string.h>
#include <math.h>

//tercer ejercicio 
int main(){
    int entero = 5;
        printf("El tamaño de un entero es: %d \n", sizeof(entero));
    unsigned int uentero = 5;
        printf("El tamaño de un unsigned entero es: %d \n", sizeof(uentero));
    float flotante = 5;
        printf("El tamaño de un flotante es: %f \n", sizeof(flotante));
    /*
    unsigned float uflotante = 5;

    printf("El tamaño de un unsigned flotante es: %f \n", sizeof(uflotante));
    */
    double doble = 5;
        printf("El tamaño de un doble es: %zu \n", sizeof(doble));
    /*
    unsigned double udoble = 5;
        printf("El tamaño de un unsigned doble es: %zu \n", sizeof(udoble));
    */
    long largo = 5;
        printf("El tamaño de un largo es: %zu \n", sizeof(largo));
    unsigned long ulargo = 5;
        printf("El tamaño de un unsigned largo es: %zu \n", sizeof(ulargo));
    short corto = 5;
        printf("El tamaño de un corto es: %d \n", sizeof(corto));
    unsigned short ucorto = 5;
        printf("El tamaño de un unsigned corto es: %d \n", sizeof(ucorto));
    char caracter = 'a';
        printf("El tamaño de un caracter es: %d \n", sizeof(caracter));
    unsigned char ucaracter = 'a';
        printf("El tamaño de un unsigned char es: %d \n", sizeof(ucaracter));

    return 0;
}