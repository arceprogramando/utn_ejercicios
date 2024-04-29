#include <stdio.h>

void probar_bucle_while()
{
    int k = 20;
    printf("-Inicio \n");
    while (k < 20)
    {
        printf("-Iteracion.\n");
    }

    printf("-Fin. \n");
}

void probar_bucle_do_while()
{
    int k = 20;
    printf("-Inicio\n");

    do
    {
        printf("-Iteración.\n");
    } while (k < 20);

    printf("Fin. \n");
}

int main()
{
    printf("WHILE.\n");
    probar_bucle_while();

    printf("DO WHILE. \n ");
    probar_bucle_do_while();
}