#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int cargarNotas(int notas[51]){
    int i;
    int nota;
    int cantidad = 0;

    int bandera = 1;
    while (bandera)
    {
        printf("ingrese la nota %d: ", i+1);
        scanf("%d", &nota);
        notas[i] = nota;
        cantidad++;

        if(nota==0){
            bandera =0;
        }

    }


    return cantidad;
}


int main(){
    int arr[50];

    int a = cargarNotas(arr);









    return 0;
}

//Implementar un programa en ANSI C que permita cargar y luego mostrar las notas (hasta 50) de un alumno a lo largo de su carrera. Para hacerlo deberá utilizar un arreglo de tipo entero, con tamaño suficiente para 50 notas y un 0 para indicar el fin de los datos válidos.

La carga de las notas debe realizarse en una función cargarNotas() que reciba un arreglo vacío y permita al usuario ingresar notas validas (entre 1 y 10), una tras otra hasta que ingrese una nota =0 esa es la indicación que no hay más notas para registrar.

Para mostrar las notas debe implementar la función mostrarNotas() que reciba un arreglo de enteros y muestre las notas separadas por une espacio hasta encontrar un valor 0.





//
Implemente una función calcularPromedio() que reciba como parámetro un arreglo de enteros de hasta 51 enteros con el formato descrito en el ejercicio anterior (notas entre 1 y 10, finalizando con un valor 0 que indica el final de los datos válidos) y retorne el promedio de las notas como un valor de tipo float.





//Ejercicio 2: Para una prueba de los juegos panamericanos se necesita un programa que procese los resultados de la final del tiro con javalina. Quedan dos participantes: A y B, por cada uno se cargarán los 2 intentos, indicando la distancia alcanzada como un valor positivo o un -1 para indicar un tiro fallido. Luego el programa deberá informar qué participante ganó o si hubo un empate. Para ganar alcanza con tener algún lanzamiento válido con mayor alcance que el mayor intento del rival. Si todos los intentos de ambos competidores son fallidos, se informará que la prueba ha quedado desierta (sin ganador).