#include <stdio.h>
#include <stdlib.h>
//mayor importe de dolares ingresados
//
int main()
{

    int dinero;
    float pesoPromedio;
    int pesoContador = 0;
    int pesoAcumulador = 0;
    int elPrimerDolar = 0;
    char tipo;
    char seguir = 's';
    int dineroDolarPrecioMayor = 0;


    do
    {
        printf("Coloque cantidad del dinero ");
        scanf("%d", &dinero);

        printf("Coloque tipo de divisa ");
        fflush(stdin);
        scanf("%c", &tipo);

       if(tipo == 'd')
       {
            if (elPrimerDolar == 0)
            {
                dineroDolarPrecioMayor = dinero;
                elPrimerDolar = 1;
            }
            else if (dinero > dineroDolarPrecioMayor)
            {
                dineroDolarPrecioMayor = dinero;
            }
        }

        if (tipo == 'p')
        {
            pesoAcumulador += dinero;
            pesoContador++;
        }

        printf("Desea continuar? ");
        fflush(stdin);
        scanf("%c", &seguir);

    }
    while (seguir == 's');

    if(pesoContador != 0)
    {
        pesoPromedio = (float)pesoAcumulador / (float)pesoContador;
    }

    printf("El dolar más caro es %d: \n", dineroDolarPrecioMayor);
    printf("El promedio de los pesos %.2f: ", pesoPromedio);
    return 0;
}
