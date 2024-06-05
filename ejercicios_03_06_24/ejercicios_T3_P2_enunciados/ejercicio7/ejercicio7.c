/*
Escriba un programa en C que lea dos enteros en las variables x e y, y calcule y
muestre por pantalla los valores de  x/y (como número decimal ) y de x%y
Ejecute el programa introduciendo valores diferentes. ¿Qué sucede cuando a la
variable y se le asigna el valor 0?
*/

#include <stdio.h>

int main(){
    int x, y;
    float division;

    printf("Introduce el valor de x: ");
    scanf("%d", &x);
    printf("Introduce el valor de y: ");
    scanf("%d", &y);

    division = (float)x / y;

    printf("La division de x/y es: %.2f\n", division);
    printf("El resto de la division de x/y es: %d\n", x % y);

    return 0;
}
