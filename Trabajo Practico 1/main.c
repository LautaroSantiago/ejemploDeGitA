#include <stdio.h>
#include <stdlib.h>

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
                printf("O 1\n");
                break;
            case 2:
                printf("O 2\n");
                break;
            case 3:
                printf("O 3\n");
                break;
            case 4:
                printf("O 4\n");
                break;
            case 5:
                printf("O 5 Salir \n");
                printf(" S E G U R E QUIERE Salir?\n");
                fflush(stdin);
                scanf("%c", &salir);
                //salir = getch();
                break;
            default:
                printf("O invalidE\n");
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
        printf("Decidase PUTE\n");
        scanf("%d", &opcion);
        //opcion = getch(); SOLO LETRAS

        return opcion;
}

