#include <stdio.h>

#include <string.h>

#include <stdlib.h>



//ejercicio 3


int main(){
    int lanzamientoA1,lanzamientoA2;
    int lanzamientob1,lanzamientob2;


    int mejorLanzamientoA,mejorLanzamientoB;

    printf("///intentos de A/// \n");
    printf("ingrese lazamiento 1: \n");
    scanf("%d",&lanzamientoA1);

    printf("ingrese lazamiento 2: \n");
    scanf("%d",&lanzamientoA2);

    printf("///intentos de B/// \n");
    printf("ingrese lazamiento 1: \n");
    scanf("%d",&lanzamientob1);

    printf("ingrese lazamiento 2: \n");
    scanf("%d",&lanzamientob2);


    if(lanzamientoA1 > lanzamientoA2){
        mejorLanzamientoA = lanzamientoA1;
    }else{
        mejorLanzamientoA = lanzamientoA2;
    }

    if(lanzamientob1 > lanzamientob2){
        mejorLanzamientoB = lanzamientob1;
    }else{
        mejorLanzamientoB = lanzamientob2;
    }


    if(mejorLanzamientoA > mejorLanzamientoB ){
        printf("ganador jugador A con %d metros \n",mejorLanzamientoA);
    }else if(mejorLanzamientoA < mejorLanzamientoB){
        printf("ganador jugador B con %d metros \n",mejorLanzamientoB);
    }else if(mejorLanzamientoA && mejorLanzamientoB == -1){
        printf("en esta prueba no hay ganadores");
    }else if (mejorLanzamientoA == mejorLanzamientoB ){
        printf("empate");
    }

    return 0;
}