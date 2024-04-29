#include <stdio.h>

void imprimir_dia(int numero_de_dia)
{
    switch (numero_de_dia)
    {
    case 1:
        printf("lunes.\n");
        break;
    case 2:
        printf("martes.\n");
        break;
    case 3:
        printf("miercoles.\n");
        break;
    case 4:
        printf("jueves.\n");
        break;
    case 5:
        printf("viernes.\n");
        break;
    case 6:
        printf("sabado.\n");
        break;
    case 7:
        printf("domingo.\n");
        break;
    default:
        printf("no es un dia de la semana.\n");
        break;
    }
}

int main()
{
    imprimir_dia(4);
    return 0;
}