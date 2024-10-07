#include <stdio.h>
#include <stdlib.h>
void eliminar(int arreglo[],int num){
    int pos=0;
    while(arreglo[pos]!=0 && arreglo[pos]!=num)pos++;
    if(arreglo[pos]==num){
        while(arreglo[pos]!=0){
            arreglo[pos]=arreglo[pos+1];
            pos++;
        }
    }
    else printf("No fue encontrado");
}

void mostrar(int val[]){
    //mostrar los valores
    int pos=0;
    while(val[pos]!=0){
        printf("%d ",val[pos]);
        pos++;
    }
}

int main()
{
    int valores[51],num,fin=0;
    printf("ingrese valor entero positivo, (0 para finalizar)\n");
    scanf("%d",&num);
    while(fin <50 && num !=0){
        valores[fin]=num;
        fin++;
        printf("ingrese valor entero positivo, (0 para finalizar)\n");
        scanf("%d",&num);
    }
    valores[fin]=0;

    mostrar(valores);

    printf("ingrese valor entero positivo a eliminar\n");
    scanf("%d",&num);

    eliminar(valores, num);

    mostrar(valores);
    return 0;
}
