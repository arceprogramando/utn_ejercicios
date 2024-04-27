#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; // creamos variable num;

etiqueta1: // etiqueta1 creada;

    printf("Introduzca un numero menor que  10 :");
    scanf("%i", &num);

    if (num > 10)
    {
        // Hasta que no sea menor que 10, no parara el programa
        printf("Es mayor que 10 \n \n");
        goto etiqueta1; // Te lleva de nuevo a la etiqueta1
    }
    else
    {
        printf("Acaba el programa\n");
    }

    // system("Pause"); // este comando no sirve para linux
    return 0;
}
