/*
Escriba un programa en C que asigne a la variable x (de tipo entero) el resultado de
4/0. ¿Qué ocurre al compilar el programa? ¿Y al ejecutarlo?
*/

#include <stdio.h>

int main()
{
    int x;
    x = 4 / 0;
    printf("x = %d\n", x);
    return 0;
}

/* dividir un numero entre 0 no es posible,
ya que no se puede dividir entre 0, p
por lo que el resultado es infinito.
¿Existe solucion? no, ya que no se puede dividir entre 0.
*/