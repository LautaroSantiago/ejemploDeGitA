#include <stdio.h>
#include <stdlib.h>
//mayor importe de dolares ingresados
//
int main()
{
    int dinero; // valor
    char tipo; //p,l,d,b
    int dolarMaximo = 0;
    char flag = 0;
    char seguir = 0;


    do
    {
        printf("Coloque el dinero ");
        scanf("%d", &dinero);

        printf("Coloque tipo de divisa ");
        fflush(stdin);
        scanf("%c", &tipo);

        if (dolarMaximo > dinero && flag == 0 || dinero == 's')
        {
            dolarMaximo = dinero;
            flag = 1;
        }

        printf("Desea seguir?");
        fflush(stdin);
        scanf("%c", &seguir);
    }
    while (seguir == 's');

    printf("El dolar maximo es de %d \n", dolarMaximo);

    return 0;
}
