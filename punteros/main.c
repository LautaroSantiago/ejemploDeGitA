#include <stdio.h>
#include <stdlib.h>
//void CambiarPorValor(int unDato);
//void CambiarPorReferencia(int *punDato);
int DameUnEntero(char *mensaje, int max, int cantidad, int *pNumero);

//int DameUnEntero();

int main()
{
 //   int numero;
    int unNumero;
    int sepudo;

    sepudo = DameUnEntero("ingrese tu edad: ", 100, 2 ,&unNumero);
   // printf("se pudo = %d\n", sepudo);
   // printf("EL NUMERO ES = %d\n", unNumero);

    if (sepudo == -1)
    {
        printf("no se pudo cargar");
    }
    else
    {
        printf("el numero es %d", unNumero);
    }
/*op1
    numero = 22;

    CambiarPorValor(numero);
    printf("numero = %d\n", numero);

    CambiarPorReferencia(& numero);
    printf("dato = %d\n", numero);
*/

    return 0;
}

int DameUnEntero(char *mensaje, int max, int cantidad, int *pNumero)
{
    //int aux;
    //int sepudo;
    int contador = 0;

    printf("%s", mensaje);
   // printf("ingrese un numero \n");
    scanf("%d", &pNumero);

    while(*pNumero > max)
    {
        contador++;
        printf("%s", mensaje);
        scanf("%d", pNumero);

        if (contador == cantidad)
        {
            return -1;
        }
    }
/*
    while(aux > max)
    {
        contador++;
        printf("%s", mensaje);
        scanf("%d", &aux);

        if (contador == cantidad)
        {
            return 0;
        }
    }
    */
    return 0;
    //return aux;
}

/*op1
void CambiarPorValor(int unDato)
{
    unDato = 90; //sinsentido
    printf("dato = %d\n", unDato);
    //scanf("%d", &unDato);
}
*/
/*op1
void CambiarPorReferencia(int *punDato)
{
    *punDato = 90; //sinsentido
    printf("dato = %d\n", *punDato);
    //scanf("%d", &unDato);
}
*/


/*
int DameUnEntero(char *mensaje, int max, int cantidad, int *pNumero);


int main()
{
    int unNumero;
    int sepudo;

    sepudo = DameUnEntero("ingrese tu edad: ", 100, 2 ,&unNumero);

    if (sepudo == -1)
    {
        printf("no se pudo cargar");
    }
    else
    {
        printf("el numero es %d", unNumero);
    }

    return 0;
}

int DameUnEntero(char *mensaje, int max, int cantidad, int *pNumero)
{
    int contador = 0;

    printf("%s", mensaje);
    scanf("%d", &pNumero);

    while(*pNumero > max)
    {
        contador++;
        printf("%s", mensaje);
        scanf("%d", pNumero);

        if (contador == cantidad)
        {
            return -1;
        }
    }

    return 0;
*/
