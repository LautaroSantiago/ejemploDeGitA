#include "Vectore.h"
void cargarVector(int vector[], int tam);//puede ser puntero: void cargarVector(int *vector, int tam); los vectores son punteros
{
    int i;

     printf("\tCARGA DE DATOS\n");
            for(i=0; i<tam; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d", &vector[T]);
            }

}

void mostrarMaximo(int[], int);
{
    int maximo;
    int flag = 0;
    int i;

     printf("MAXIMO: %d ", maximo);
     for (i=0; i<tam; i++)
     {
         if(vector[i]== maximo)
         {
         printf("%d-", i);
         }

     }


}

int calcularMaximo(int vector[], int tam);
{
    int i;
  //  int flag = 0;
    int maximo;

    maximo = calcularMaximo(vector, tam);

    for(i=0; i<tam; i++)
     {
         if (flag==0 || vector[i]>maximo)
         {
             maximo = vector[i];
         }
   /*      if (flag==0 || vector[i]<minimo)
         {
             minimo = vector[i];
         }*/
        flag = 1;
     }
}
