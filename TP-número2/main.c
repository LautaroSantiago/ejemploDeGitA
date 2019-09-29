#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define ELEMENT 2

int main()
{
    int opcion;
    char seguir;

        do
        {
            switch(opcion)
            {
                case 1:
                    system("pause");
                    break;
                case 2:
                    system("pause");
                    break;
                case 3:
                    system("pause");
                    break;
                case 4:
                    system("pause");
                    break;
                case 5:
                    system("cls");
                    printf("usted eligio salir.\n\n");
                    printf("oprima s para salir\n");
                    fflush(stdin);
                    scanf("%c", &seguir);
                    break;
                default:
                    system("cls");
                    printf("\n\nOPCION INVALIDA...\n\n");
                    system("pause");
            }
        }while(seguir != 's');
}
