/*Escriba un programa que declare una variable de tipo entero x y una variable y de tipo 
real, asigne a dichas variables los valores 6 y 2.0, respectivamente, y calcule y muestre 
por pantalla el resultado de las siguientes operaciones: 
a) x*y 
b) x/y 
c) x%y
*/

#include <stdio.h>

int main ()
{
    int x = 6;
    float y = 2.0;
    float a, b, c;

    a = x * y;
    b = x / y;
    c = x % (int)y;

    printf("a) x multiplicado y = %.2f\n", a);
    printf("b) x dividido y = %.2f\n", b);
    printf("c) x resto y = %.2f\n", c);

    return 0;
}