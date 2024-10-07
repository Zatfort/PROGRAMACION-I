#include <stdio.h>
#include <string.h>

void sumar (int a,int b,int c) {
    if (a >= 0 && b >=0 && c >= 0)
    {
        printf("%d", a + b + c);
    }  
}


int main(){
    sumar(1,2,3);
    return 0;
}