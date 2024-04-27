#include <stdio.h>

// Innecesarios , en linux no existe la libreria conio.h
// #include <conio.h>
//$ include <stdlib.h>

int main()
{
    char caracter;

    printf("Introduce un caracter: ");
    scanf("%c", &caracter);

    printf("\nEl usuario ha tecleado el caracter: %c\n", caracter);

    // system("Pause"); // este comando no sirve para linux
    return 0;
}