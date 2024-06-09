/*
Dada la función f(x), realizar un programa C que calcule dicha función para un valor
dado de x y lo muestre por pantalla.
        x + 3 para x ≤ 0
f(x){
        x2 + 2x para x > 0
*/

#include <stdio.h>

int main()
{
    int x;
    printf("Introduce un valor para x: ");
    scanf("%d", &x);
    if(x <= 0)
    {
        printf("f(%d) = %d\n", x, x + 3);
    }
    else
    {
        printf("f(%d) = %d\n", x, x * x + 2 * x);
    }

    return 0;
}