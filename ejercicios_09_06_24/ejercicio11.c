/*
Escriba un programa en C que lea un carácter y utilizando la instrucción switch
determine si es o no una vocal. Realice el mismo ejercicio utilizando la sentencia if
¿Qué opción es mejor?
 */

#include <stdio.h>

int main()
{
    char c;
    printf("Introduce un caracter: ");
    scanf("%c", &c);
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Es una vocal\n");
            break;
        default:
            printf("No es una vocal\n");
    }

    return 0;
}

// La opción con switch es mejor porque es más legible y más eficiente. La opción con if es más larga y menos eficiente , pero todo depende de la situación. En este caso, la opción con switch es mejor ya que la cantidad de casos es pequeña . Si la cantidad de casos es grande, la opción con if es mejor.