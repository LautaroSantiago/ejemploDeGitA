#include <stdio.h>
#include <stdlib.h>

//prototipo
    sumarNumeros(int numero1, int numero2);

    int main()
    {
        //llamada
        int numero1;
        int numero2;
        int resultado;

        printf("numero 1 ");
        scanf("%d", &numero1);
        printf("numero 2 ");
        scanf("%d", &numero2);

        resultado = suma(numero1, numero2);

        printf("La suma es de %d ", resultado);
        return 0;
    }

    int suma(int numero1, int numero2)
     {
        int total;

        total = numero1 + numero2;
        return total;
     }
