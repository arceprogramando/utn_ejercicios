#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i = 1;
    bool b = true;

    while (i <= 10 && b == true)
    {
        printf("%i \n", i);
        i++;
    }

    // system("Pause"); // este comando no sirve para linux
    return 0;
}