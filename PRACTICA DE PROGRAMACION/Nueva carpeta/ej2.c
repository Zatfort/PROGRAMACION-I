#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[10];
    printf("Ingrese sólo un carácter!\n");
    gets(texto);
    while(strlen(texto)!=1)
    {
        printf("ERROR. Ingrese sólo un carácter!\n");
        gets(texto);
    }
    if(texto[0]=='a' || texto[0]=='e'|| texto[0]=='i'|| texto[0]=='o' || texto[0]=='u' ||
       texto[0]=='A' || texto[0]=='E'|| texto[0]=='I'|| texto[0]=='O' || texto[0]=='U')
    {
        printf("%s es una vocal",texto);
    }
    else printf("%s no es una vocal",texto);
    return 0;
}
