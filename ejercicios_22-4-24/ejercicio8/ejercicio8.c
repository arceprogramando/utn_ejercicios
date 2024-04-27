#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Introduzca un numero: ");
    scanf("%i", &num); // Asignar valor introducido a la variable num

    if (num > 5)
    {
        printf("el numero es mayor que 5 . \n ");
    }

    // system("Pause"); // este comando no sirve para linux
    return 0;
}