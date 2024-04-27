#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Elige numero del 1 al 4:");
    scanf("%i", &num);

    switch (num) // Entre parentesis la variable a comprobar
    {
    case 1: // Si has elegido el 1
        printf("num es igual a 1\n");
        break;

    case 2: // Si has elegido 2
        printf("num es igual a 2\n");
        break;

    case 3: // Si has elegido 3
        printf("num es igual a 3\n");
        break;

    case 4: // Si has elegido 4
        printf("num es igual a 4\n");
        break;

        // Asi con todos los casos que queramos...
    default: // Si has elegido otro numero distinto
        printf("No elegiste un numero del 1 al 4. \n");

        break;
    }

    // system("Pause"); // este comando no sirve para linux
    return 0;
}
