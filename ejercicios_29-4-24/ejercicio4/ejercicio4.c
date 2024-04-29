#include <stdio.h>

int main()
{
    int k = 10;

    do
    {
        printf("k vale %d\n", k);
        k++;
    } while (k < 20);
    printf("Hemos salido del bucle. \n");
}