#include <stdio.h>
#include <stdlib.h>
//vectores a funciones
//entregar calculadora
//biblioteca in put clase 4
/** \brief Calcular el factorial de un numero
 *
 * \param  int El numero sobre el que se el que se realiza en el factorial
 * \return int El factorial
 *
 */
//recursividad ocupa mucha memoria, hace muchos procesos

unsigned int factorial(int);

int main()
{
    int numero = 5;
    unsigned int resultado;

    resultado = factorial(numero);

    printf("\nEl factorial es: %d", resultado);//buscar modificador de varialble*

    return 0;
}

unsigned int factorial(int)
{
    unsigned int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
         resultado = numero*factorial(numero-1);
    }
    return resultado;

}

/*
int main()
{
    //int factorial[N];
    int numero = 5;
    int resultado = 1;
    int i;

    //printf("Coloque el numero ");
    //scanf("d", numero);

//for (i = 1; i<= numero; i++)

    for(i = numero; i >= 1; i--)
    {
        resultado = resultado * i;
    }

    printf("\nEl factorial es: %d", resultado);

    return 0;
}
*/

