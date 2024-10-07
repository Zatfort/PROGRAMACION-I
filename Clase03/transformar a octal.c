#include <stdio.h>
#include <string.h>
#include <math.h>

// primer ejercicio
/*

//convertir numero a octal ejercicio 1
void main() {
    
    int numero;
    int base = 8;
    int potencia = 0;
    int resultado = 0;
    int resto;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    while ( numero > 0){
        resto = numero % 10;
        resultado = resultado + resto * pow(base, potencia);
        numero = numero / 10;
        potencia++;
    }
    printf("El numero en octal es: %d\n", resultado);

}
*/

// mismo ejercicio pero en for
int main(){
    int n;
    int r;
    int p;
    int pot;
    int base;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("Ingrese la base: ");
    scanf("%d", &base);
    
    for(r= 0,p=0,pot=1;n>0;pot = pot * base , p++, n = n/10){
       r=r + n%10 * pot;
    }
    printf("El numero en base %d es: %d\n", base, r);
    return 0;
}