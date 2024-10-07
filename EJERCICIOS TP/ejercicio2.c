#include <stdio.h>
#include <string.h> // Para usar strlen()

int main() {
    // Declaramos una cadena de caracteres (string)
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    
    // Obtenemos la longitud de la cadena usando strlen()
    int longitud = strlen(vocales);
    
    // Recorremos la cadena usando un bucle for
    for (int i = 0; i < longitud; i++) {
        printf("El carácter en la posición %d es: %c\n", i, vocales[i]);
    }
    
    return 0;
}
