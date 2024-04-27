#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1; // creamos  e inicializamos la variable i;

    while (i <= 10) // Bucle while, solo se pone la condicion/es
    {
        printf("\n%i", i); // Escribe  "i" por pantalla
        i++;               // Incrementa a "i" en uno
    }

    // system("Pause"); // este comando no sirve para linux
    return 0;
}
