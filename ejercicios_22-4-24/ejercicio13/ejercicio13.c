#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; // creamos la variable i;

    for (i = 1; i <= 10; i++) // Bucle for
    {
        // Escribe el valor de la variable 'i' por pantalla
        printf("\n%i", i);
    }

    // system("Pause"); // este comando no sirve para linux
    return 0;
}
