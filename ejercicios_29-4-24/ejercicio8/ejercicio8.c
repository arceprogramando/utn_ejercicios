#include <stdio.h>

int main(void)
{
    char x;
    x = 'c';

    if (x == 'a' || x == 'b')
    {
        int z;
        z = 8;
        printf("Caso a y b estan combinados. \n");
        printf("%d\n", z);
    }
    else if (x == 'c')
    {
        printf("Caso c.\n");
    }
    else if (x == 'd')
    {
        printf("Caso d.\n");
    }
    else if (x == 'e')
    {
        printf("Caso e.\n");
    }
    else
    {
        printf("Caso por defecto\n");
    }
    return 0;
}
