#include <stdio.h>
#include <stdlib.h>

void mostrarSuma();
void menu(int);
int sumar(int numeroUno, int numeroDos);
int calcular(int numeroUno, int numeroDos, int operacion);
///1 suma 2 resta 3 ,mult, 4 divide, 5 factorea

int main()
{
    if (calcular (3,3,5))
    {
        printf("Bien");
    }
    else
    {
        printf("Mal");
    }

        if (calcular (8,0,4))
    {
        printf("Bien");
    }
    else
    {
        printf("Mal");
    }
}
/*
void mostrarSuma()
{
    int numeroUno;
    int numeroDos;

    printf("Coloque el primer numero");
    scanf("%d", &numeroUno);
    printf("Coloque el segundo numero");
    scanf("%d", &numeroDos);
}
*/
/*
void menu()
{
    int opcion;

    printf("Coloque la opcion que desea realizar \1 suma 2 resta 3 ,mult, 4 divide, 5 factor");
    scanf("d", &opcion);
}
*/

int calcular(int numeroUno, int numeroDos, int operacion)
{
    int total;

   // opcion = menu;

    switch (operacion)
    {
        case 1:
            total = numeroUno + numeroDos;
            break;
        case 2:
            total = numeroUno - numeroDos;
            break;
        case 3:
            total = numeroUno * numeroDos;
            break;
        case 4:
            total = numeroUno / numeroDos;
            break;
        default:
            printf("Elija otra opcoin");
    }
    system("pause");
    //operacion = total;


    /* */

}
