#include <stdio.h>

int main()
{
    int x = 20;

    if (x == 20)
    {
        printf("x vale 20.\n");
    }
    else if (x == 30)
    {
        printf("x vale 30.\n");
    }
    else if (x == 40)
    {
        printf("x no vale 40.\n");
    }
    else
    {
        printf("No se lo qeu vale x. \n");
    }

    printf("Esto se ejecuta siempre.\n");
    return 0;
}