#include <stdio.h>
#include <stdlib.h>
///int devuelve
///void muestra
///Prototipo
int mostarMenu(int numeroA,int numeroB);
int menu(int numeroA, int numeroB);

///Funcion Principal
int main()
{

    int A = 0;
    int B = 0;
    ///Llamada
    mostarMenu(A, B);

    return 0;
}

int mostarMenu(int numeroA,int numeroB)
{
    int opcion;
    char salir;

    do
    {
        ///Llamada
        opcion = menu(numeroA, numeroB);

        switch (opcion)
        {
            case 1:

                printf("Opción 1 Ingresar 1er operando (A = x)\n");
                break;
            case 2:
                printf("Opción 2 Ingresar 2do operando (B = y)\n");
                break;
            case 3:
                printf("Opción 3 Calcular todas las operaciones \n");
                break;
            case 4:
                printf("Opción 4 Informar resultados \n");
                break;
            case 5:
                printf("Opción 5 Salir \n");
                printf("QUIERE Salir?\n");
                fflush(stdin);
                scanf("%c", &salir);
                //salir = getch();
                break;
            default:
                printf("O invalido\n");
        }
        system("pause");
    }
    while (salir != 's');
    //while (opcion != 5);

}
int menu(int numeroA, int numeroB)
{
        int opcion;

        system("cls");

        printf("1)Ingresar primer operando (A = %d) \n", numeroA);
        printf("2) \n");
        printf("3) \n");
        printf("4) \n");
        printf("5) \n");
        //printf("elija \n");
        scanf("%d", &opcion);
        //opcion = getch(); SOLO LETRAS


        return opcion;
}
/*

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

}*/

///
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

}*/
