/*
Escribir un programa que tras solicitar al usuario las coordenadas (x, y) de dos puntos
calcule la pendiente de la recta que pasa por ambos puntos. La pendiente de dicha recta
se calcula como:

    m = (y2 - y1) / (x2 - x1)

Validar el funcionamiento del programa cuando los puntos introducidos son: A(2,1) y
B(2,5).
 */

#include <stdio.h>

int main(){
    float x1, y1, x2, y2, m;
    printf("Introduce las coordenadas del punto A (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Introduce las coordenadas del punto B (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    m = (y2 - y1) / (x2 - x1);
    printf("La pendiente de la recta que pasa por los puntos A(%.2f, %.2f) y B(%.2f, %.2f) es: %.2f\n", x1, y1, x2, y2, m);
    return 0;
}