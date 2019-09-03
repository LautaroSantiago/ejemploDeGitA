
#include <stdlib.h>

#include "Vectore.c"

#define T 10//donde se encuentre T, lo cambia por 5
//int const T = 10; //ocupa memoria

int main()
{

    int vectorDeNumeros[T];/*={7,-5,5,-6,-1,-4,10,5,4,-1};*/
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int maximo;
    int minimo;
    int flag;
    int opcion;

    do
    {
     printf("1.Cargar numeros\n");
     printf("2.Mostar todo\n");
     printf("3.Mostar negativos\n");
     printf("4.Mostrar promedio positivos\n");
     printf("5.Mostarr Maximo\n");
     printf("6.Mostrar Minimo\n");
     printf("7.Slair\n");
     printf("Elija opcion: \n");
     scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
            cargarVector(vectorDeNumeros, T);
            break;
        case 2:
            printf("\tMUESTRO EL VECTOR\n");
            for(i=0; i<tam; i++)
            {
                printf("%d\n", vector[T]);
            }

            break;
        case 3:
            printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
            for(i=0; i<10; i++)
            {
                if(vectorDeNumeros[i]<0)
                {
                   printf("%d\n", vectorDeNumeros[T]);
                }

            }
            break;
        case 4:

            for(i=0; i<10; i++)
            {
                if(vectorDeNumeros[i]>=0)
                {
                    sumaDePositivos += vectorDeNumeros[T];
                    contadorDePositivos++;
                }
            }
            promedioPositivos = (float)sumaDePositivos/contadorDePositivos;

            printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);
             printf("\n\n\PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);
            break;
        case 5:
            mostrarMaximo(vectorDeNumeros, T);

            break;
        case 6:
            flag = 0;
            for(i=0; i<10; i++)
             {

                 if (flag==0 || vectorDeNumeros[T]<minimo)
                 {
                     minimo = vectorDeNumeros[T];
                 }
                flag = 1;
             }

            printf("MINIMO: %d ", minimo);
             for (i=0; i<10; i++)
             {
                 if(vectorDeNumeros[T]== minimo)
                 {
                 printf("%d-", i);
                 }
             }
         break;
        }
    system("pause");
    system("cls");
    }
    while(opcion != 7);


/*
    printf("\tCARGA DE DATOS\n");
    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vectorDeNumeros[i]);
    }
*/




/*

     printf("MINIMO: %d ", minimo);
     for (i=0; i<10; i++)
     {
         if(vectorDeNumeros[i]== minimo)
         {
         printf("%d-", i);
         }
     }
     */
    return 0;
}


