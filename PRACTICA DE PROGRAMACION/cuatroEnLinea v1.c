#include <stdio.h>
#include <stdlib.h>
void mostrarTablero(int t[5][7]){
	//completar
}

void jugarEn(int t[5][7],int c,int jugador){
	//completar
}

int verficar(int t[5][7]){
    int ganador=0;
    int vh=verificar_horizontal(t);
    int vv=verificar_vertical(t);
    int vd1=verificar_diagonal1(t);
    int vd2=verificar_diagonal2(t);
    if(vh!=0) ganador=vh;
    if(vv!=0) ganador=vv;
    if(vd1!=0) ganador=vd1;
    if(vd2!=0) ganador=vd2;
    return ganador;
}

int verificar_horizontal(int t[5][7]){
    int ganador=0;
	//completar
    return ganador;
}
int verificar_vertical(int t[5][7]){
    int ganador=0;
	//completar
    return ganador;
}
int verificar_diagonal1(int t[5][7]){
    int ganador=0;
	//completar
    return ganador;
}
int verificar_diagonal2(int t[5][7]){
    int ganador=0;
	//completar
    return ganador;
}

int main()
{
    int turno=1; //el turno cambiará entre el jugador 1 y el jugador 2
    int columna;
    int ganador=0; //inicialmente no hay un ganador
    int tablero[5][7]={ {0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0}};// creo el tablero vacío.
    mostrarTablero(tablero);
    while(ganador==0){
        printf("Turno jugador %d\n",turno);
        mostrarTablero(tablero);
        printf("Seleccione columna para jugar 0-6\n");
        scanf("%d",&columna);
        jugarEn(tablero,columna,turno);
        ganador=verficar(tablero);
        if(ganador ==0){
            turno++;
            if(turno >2) turno=1; //cambia de jugador solo si el anterior no ganó
        }
    }

    printf("---------------------\nGanó el jugador %d",turno);
    mostrarTablero(tablero);
    return 0;
}
