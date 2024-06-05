/*
Escriba y compile el siguiente programa en C:
#include <stdio.h>

¿Detecta algún error?
Ejecute el programa anterior asignando a cadena el valor "Hola", ¿qué sucede? Repita la
ejecución asignando a cadena el valor "Buenos días", ¿qué observa?
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b ,  c;
    char cadena[8];
    a = 7 , b = 14, c = 128;
    printf("Asigne un valor a la cadena de caracteres ");
    scanf("%[^\n]", cadena);
    printf("La cadena es %s\n", cadena);
printf ("El valor asignado a las variables es:\na=%d\nb=%d\nc=%d\n", a, b, c);
system("PAUSE");
return (0);
}

/* El programa inicial tenia problemas a la hora declarar variables ,
pero despues no tenia problemas de guardado de datos en la variable cadena .
 comportamiento indefinido debido a un desbordamiento de búfer. Si la entrada del usuario en scanf("%[^\n]", cadena); excede el tamaño de cadena (que es de 8 bytes), podría sobrescribir los valores de otras variables en la pila, incluyendo c.
*/