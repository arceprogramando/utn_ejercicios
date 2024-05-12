// Ejercicio 4 : Cálculo de perímetro de circunferencia, área del círculo, y volumen de la esfera.
// Suponiendo que pi = 3.1416. Escribe un programa que pida al usuario que introduzca el radio, 
//y presente por pantalla el cálculo del perímetro de la circunferencia(2 * pi * r), el área del círculo(pi *r2), 
//y el volumen de la esfera(V = 4 * pi * r3 / 3).

#include <stdio.h>
#define PI 3.1416

int main()
{
    float radio, perimetro, area, volumen;

    printf("Introduzca el radio:");
    scanf("%f", &radio);

    perimetro = 2 * PI * radio;
    area = PI * radio * radio;
    volumen = (4 * PI * (radio * radio * radio)) / 3;

    printf("El perimetro de la circunferencia con radio %f es: %.2f\n", radio, perimetro);
    printf("El area del circulo es %.2f\n", area);
    printf("El volumen de la esfera es: %.2f\n", volumen);

    return 0;
}