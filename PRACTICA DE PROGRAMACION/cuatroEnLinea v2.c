#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificar_horizontal(int t[5][7])
{
    int ganador=0;
    for(int f=0; f<5; f++) // recorro las filas una por una
    {
        int contador=0; // variable que uso para ver si gano o no el jugador
        for(int c=0; c<6; c++) // recorro columnas una por una
        {
            int valor=t[f][c]; // guardo el valor que estoy analizando
            //printf("\nfila %d\n",f);
            //printf("Columna %d\nvalor=%d\n",c,valor);
            int jugador; // varaible para identificar si el que gano es el jugador 1 o 2
            if (t[f][c+1]==valor)  // comparo el valor elegido con el siguiente (misma fila pero una columna a la derecha)
            {
                contador+=1;
                //printf("contador=%d\n",contador);
                jugador=valor; // guardo el jugador al que le pertenece la ficha
                //printf("jugador=%d\n",jugador);
                if(jugador==0)  // si la ficha no le pertenece a nadie el contador se resetea
                {
                    contador=0;
                }
            }
            else  // si la ficha es de un jugador pero es la ultima de la fila el contador se resetea a 0 para evitar que sume fichas de distintas filas
            {
                contador=0;
            }
            if (contador == 3 && jugador==1)  // si llego a 3 el contador y son tres 1 el ganador es el jugador 1
            {
                //printf("gano el jugador %d\n", jugador);
                ganador=1;
            }
            if (contador == 3 && jugador==2)  // si llego a 3 el contador y son tres 2 el ganador es el jugador 2
            {
                //printf("gano el jugador %d\n", jugador);
                ganador=2;
            }
        }
    }
    return ganador;
}

void mostrarTablero(int tablero[5][7])
{
    for (int fil = 0; fil < 5; fil++)
    {
        for (int col = 0; col < 7; col++)
        {
            if(tablero[fil][col]==0) printf(". ");
            else printf("%d ", tablero[fil][col]);
        }
        printf("\n");
    }
}

int hayLugarColumna(int t[5][7],int col){
    int haylugar;
    if(t[0][col]==0) haylugar=1;
    else haylugar=0;
    return haylugar;
}

void jugarEn(int t[5][7],int c,int jugador)
{
    int valor=0,jugo=0;
    while(jugo==0){
        if(t[4-valor][c]==0){
            t[4-valor][c]=jugador;
            jugo=1;
        }
        valor++;
    }

    //completar
}

int verificar(int t[5][7])
{
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

int verificar_vertical(int t[5][7])
{
    int ganador = 0;
    for (int j = 0; j < 7; j++)
    {
        for (int i = 0; i <= 1; i++)
        {
            // Solo hasta 1 para evitar desbordamiento
            int ficha = t[i][j];
            if (ficha != 0 && ficha == t[i+1][j] && ficha == t[i+2][j] && ficha == t[i+3][j])
            {
                ganador = ficha;
                return ganador;
            }
        }
    }
    return 0; //no hubo gaqnador
}
int verificar_diagonal1(int t[5][7])
{
    int ganador=0;
    for(int f=0;f<2;f++){
        for(int c=0;c<4;c++){
            if(t[f][c]!=0 && t[f][c]==t[f+1][c+1] && t[f][c]==t[f+2][c+2] && t[f][c]==t[f+3][c+3])
                ganador=t[f][c];
        }
    }
    return ganador;
}
int verificar_diagonal2(int t[5][7])
{
    int ganador=0;
    for(int f=0;f<2;f++){
        for(int c=6;c>=3;c--){
            if(t[f][c]!=0 && t[f][c]==t[f+1][c-1] && t[f][c]==t[f+2][c-2] && t[f][c]==t[f+3][c-3])
                ganador=t[f][c];
        }
    }
    return ganador;
}

int humano(int t[5][7]){
    int col;
   printf("Seleccione columna para jugar 0-6\n");
   scanf("%d",&col);
    while(col <0 || col >6 || hayLugarColumna(t,col)==0){
            printf("Error. Seleccione columna para jugar 0-6\n");
            scanf("%d",&col);
        }
    return col;
}

int ia0(int t[5][7]){
    int col=rand()%7; //genera un valor entre 0 y 6
    while(hayLugarColumna(t,col)==0) col=rand()%7;
    return col;
}

int ia1(int t[5][7],int jugador){
    int prueba[5][7];
    int col;
    //para cada columna
    for(col=0;col<7;col++)
    {
        //copio el tablero
        for(int f=0;f<5;f++){
            for(int c=0;c<7;c++){
                prueba[f][c]=t[f][c];
            }
        }
        //pruebo jugar en la columna col
        if(hayLugarColumna(prueba,col)==1){
            jugarEn(prueba,col,jugador);
            // verifico si gané
            if(verificar(prueba)==jugador){
                return col;
            }
        }

    }
    //si no tengo movida ganadora respondo cualquiera
    col=rand()%7; //genera un valor entre 0 y 6
    while(hayLugarColumna(t,col)==0) col=rand()%7;
    return col;
}


int main()
{
    int turno=1; //el turno cambiará entre el jugador 1 y el jugador 2
    int columna;
    int ganador=0; //inicialmente no hay un ganador
    int tablero[5][7]= {
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0}
    };// creo el tablero vacío.
    //mostrarTablero(tablero);
    int jugadas=0;
    srand(time(NULL));
    while(ganador==0 && jugadas<35)
    {
        printf("Turno jugador %d\n",turno);
        mostrarTablero(tablero);
        if(turno==2)
            columna=humano(tablero);
        else columna=ia1(tablero,turno);
        //insistir para tener una columna valida y con lugar
        jugarEn(tablero,columna,turno);
        jugadas++;
        ganador=verificar(tablero);
        if(ganador ==0)
        {
            turno++;
            if(turno >2) turno=1; //cambia de jugador solo si el anterior no ganó
        }
    }
    if(ganador==0){
        printf("Empate\n");
    }
    else{
        printf("---------------------\nGanador el jugador %d\n\n",turno);
    }
    mostrarTablero(tablero);
    return 0;
}
