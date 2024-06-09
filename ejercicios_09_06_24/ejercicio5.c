/*
Escriba un programa en C que muestre por pantalla el valor de una entrada de cine en
función de los años de la persona. Así, el precio es de 7 Euros, pero si el usuario tiene
menos de 5 años se aplica un 60% de descuento, y si es mayor de 60 años, se aplicará
un descuento del 55 %. El precio de la entrada se debe declarar como una constante.
*/

#include <stdio.h>

int main ()
{
    int edad;
    const float precio = 7.0;
    float precio_final;
    
    printf("Introduce tu edad: ");
    scanf("%d", &edad);
    
    if (edad < 5)
    {
        precio_final = precio * 0.4;
    }
    else if (edad > 60)
    {
        precio_final = precio * 0.45;
    }
    else
    {
        precio_final = precio;
    }
    
    printf("El precio final es: %.2f\n", precio_final);
}