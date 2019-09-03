#include <stdio.h>
#include <stdlib.h>

void fuction(int*);


int main()
{
    int numero = 4;
    printf("numero antes de modificar %d", numero);
    fuction(&numero);
    printf("\n numero despues de modificar %d", numero);
    return 0;
}

void fuction(int* numero)
{
    //*numero = 100;//* operador de inacceso
    printf("\nIngrese un numero: ");
    scanf("%d", numero);
}
