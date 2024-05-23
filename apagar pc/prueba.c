#include <stdlib.h>

int main()
{
    // Utiliza el comando 'shutdown /r /t 0' para reiniciar la PC en Windows
    int result = system("shutdown /r /t 0");

    // Verificar si el comando se ejecutó correctamente
    if (result == -1)
    {
        printf("Error al ejecutar el comando.\n");
    }
    else
    {
        printf("Reiniciando la PC...\n");
    }

    return 0;
}