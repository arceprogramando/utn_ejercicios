/*
Escriba un programa en el que se declare una variable de tipo entero y se le asigne un
valor. El programa debe mostrar el valor de la variable y la dirección de memoria en la
que se almacena.
*/

#include <stdio.h>
int main()
{
    int x = 10;
    printf("El valor de la variable x es: %d\n", x);
    printf("La direccion de memoria de la variable x es: %p\n", &x);
    /*
     Lo que hace el operador & es devolver la dirección de memoria de la variable x %
     y la %p es para que me muestre la dirección de memoria en hexadecimal.
    */
    return 0;
}