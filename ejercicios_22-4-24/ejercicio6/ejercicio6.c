// Copiar codigo

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; // Creamos una variable tipo entero

    // Mostramos la frase por pantalla
    printf("Introduzca un numero:");

    // Aqui se guarda el numero introducido en la variable num
    scanf("%i", &num);

    // Mostramos por pantalla el numero introducido

    printf("Numero teclado por el usuario : %i \n", num);

    // system("Pause"); // este comando no sirve para linux
    return 0;
}