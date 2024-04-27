// Realiza un programa que contenga un menú de 3 opciones.
// Estas opciones serán 1, 2 y 3. Si el usuario introduce el número 0,
// el programa acabará, pero mientras elija una opción válida que no sea el 0 el programa debe seguir.
// Estaría bien que si introduce una opción que no sea del menú,
// o sea, ni 1, ni 2, ni 3, el programa te avisara.

#include <stdio.h>

int main()
{
    int opcion;

    do
    {
        printf("\nMenú de opciones:\n");
        printf("1. Opción 1\n");
        printf("2. Opción 2\n");
        printf("3. Opción 3\n");
        printf("0. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Ha elegido la Opción 1.\n");
            break;
        case 2:
            printf("Ha elegido la Opción 2.\n");
            break;
        case 3:
            printf("Ha elegido la Opción 3.\n");
            break;
        case 0:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción no válida. Por favor, ingrese una opción válida.\n");
        }
    } while (opcion != 0);

    // system("Pause"); // este comando no sirve para linux
    return 0;
}