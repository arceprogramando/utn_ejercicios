#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 1; // Creamos e inicializamos la variable i

    do // Instrucciones que se hacen si se cumple la condicion de while
    {
        printf("%i \n", i);
        i++;
    }

    while (i <= 10); // Bucle while, solo se pone la condicion/es

    // system("Pause"); // este comando no sirve para linux
    return 0;
}