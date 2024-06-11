/*
Escriba un programa que pida al usuario su nombre y contrasena y le de tres
oportunidades para introducir los datos correctos, que serán root y 1234. Si los datos
introducidos son correctos se mostrará por pantalla “Bienvenido al sistema”. En caso
contrario se mostrará un mensaje por pantalla indicando que se ha superado el número
de intentos permitido.
Notas:
Puesto que las cadenas de caracteres finalizan con el carácter nulo (‘\0’), usuario y
contrasena se declararán como cadenas de longitud 5 (char usuario[5]). Para leer
cualquiera de estas cadenas con la función scanf se usará el descriptor de formato %s y
dado que el nombre de la cadena ya es una dirección, éste no debe ir precedido del
símbolo &(scanf(“%s”, usuario)).
Para comparar cadenas se debe usar la función strcmp (string compare), por ejemplo
strcmp(usuario, "root"), que devolverá un 0 si las cadenas son iguales y otro valor si
son distintas.

*/

#include <stdio.h>
#include <string.h>

int main(){
    char usuario[5], contrasena[5];
    int intentos = 3;
    do{
        printf("Introduce tu nombre de usuario: ");
        scanf("%s", usuario);
        printf("Introduce tu contrasena: ");
        scanf("%s", contrasena);
        if(strcmp(usuario, "root") == 0 && strcmp(contrasena, "1234") == 0){
            printf("Bienvenido al sistema\n");
            return 0;
        }else{
            intentos--;
            if(intentos == 0){
                printf("Has superado el numero de intentos permitidos\n");
                return 0;
            }else{
                printf("Usuario o contrasena incorrectos. Te quedan %d intentos\n", intentos);
            }
        }
    }while(intentos > 0);
    return 0;
}