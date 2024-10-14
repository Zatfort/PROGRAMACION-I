#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int factorial(int num){
    int suma = 1;
    for(int i = 1;i<=num;i++){
        suma *=i;
    }

    printf("el factorial de %d es %d",num,suma);
    return 0;
}
int frecuencia(int numero,int digito){
    int frecuencia = 0;
    while(numero > 0){
        int digitoActual = numero % 10;
        if(digitoActual == digito){
            frecuencia++;
        }
        numero /= 10;
    }
    return frecuencia;
}

int sumarDigitos(int num){
    int suma = 0;
    int numerotemporal = num;
    while(num!=0){
        suma += num %10;
        num /= 10;
    }
    printf("suma de los digitos de %d es : %d \n",numerotemporal,suma);
    return 0;
}


int esPrimo(int num){
    if(num <= 1) return 0;

    for(int i = 2;i*i<=num;i++){
        if(num % i==0)return 0;
    }
    return 1;
}

int main (){
    int numero;
    int digito;
    int bandera = 1;
    int numeroMayor = 1;
    printf("ingrese un numero primo: \n");
    while(bandera){
        scanf("%d",&numero);
        if (esPrimo(numero)){
            printf("es primo\n");
            sumarDigitos(numero);
            //buscar frecuencia
            printf("ingrese un digito: ");
            scanf("%d",&digito);
            int contarFrecuencia = frecuencia(numero,digito);
            printf("El digito %d aparece %d veces en el numero %d.\n", digito, contarFrecuencia, numero);
            printf("////////////////////////////////////////// \n");
            // Actualizar el número mayor si el número ingresado es más grande
            if(numero > numeroMayor)numeroMayor = numero;

            printf("ingrese otro numero primo: \n");
        }else{
            printf("no es primo\n");
            bandera = 0;
        }
    }



    printf("numero mayor es %d \n",numeroMayor);
    factorial(numeroMayor);



    return 0;
}
