/*Escriba un programa en C que genere la siguiente serie: 5,10,15,20,25,30… El
programa preguntará primero cuantos términos se quieren mostrar y después mostrará
la serie correspondiente */

#include <stdio.h>

int main()
{
    int i, n;
    printf("Ingrese la cantidad de términos a mostrar: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i * 5);
    }
    return 0;
}