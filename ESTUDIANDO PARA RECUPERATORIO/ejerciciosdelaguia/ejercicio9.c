#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (){
    char email[200];
    printf("ingrese su email :\n");
    gets(email);
    int validacion = 1;
    int longitud = strlen(email);

    for(int i = 0;i<longitud;i++){
        if(email[i] =='@'){
            if(email[0]=='@' || email[longitud-1]=='@'){
                validacion = 0;
        }

    }
    }
    if(validacion == 1){
        printf("email correcto \n");
    }else{
        printf("email incorrecto \n");
    }


return 0;
}
