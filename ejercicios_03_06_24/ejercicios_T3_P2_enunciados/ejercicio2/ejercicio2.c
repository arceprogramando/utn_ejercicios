/*
Escriba un programa que muestre en la pantalla un mensaje de presentación, pregunte
al usuario su nombre y le salude con un mensaje personalizado que use el nombre que
se acaba de leer.

Nota: La lectura de cadenas de caracteres mediante la función scanf se detiene en
cuanto se encuentra un espacio en blanco. Por tanto, si al solicitar el nombre se
introduce algo como "Miguel de Cervantes", solo se almacenará en la variable cadena
el texto antes del espacio ("Miguel").
Para leer el nombre completo se puede recurrir al especificador de formato [^\n] que
indica que deben leerse todos los caracteres hasta que se introduzca un salto de línea.
Por ejemplo scanf ("%[\n]",nombre);

*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char nombre[100];
    
    printf("Hola\n");
    printf("Como te llamas?");
    scanf("%[^\n]", nombre);
    printf("Hola, %s, encantado de conocerte\n", nombre);
    system("pause");
    return 0;
}