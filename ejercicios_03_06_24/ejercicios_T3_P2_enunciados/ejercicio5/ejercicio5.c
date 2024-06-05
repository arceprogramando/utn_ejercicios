/*Encuentre los errores del siguiente programa
int main(void)
{
foat radio, perimetro;
printf ( introduzca el radio");
scanf("%f", &radio);
perimetro= 2*PI*radio
printf("%f", perimetro);
return(0)
*/

#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float radio, perimetro;
    printf("introduzca el radio:");
    scanf("%f", &radio);
    perimetro = 2 * PI * radio;
    printf("%f", perimetro);
    return 0;
}
