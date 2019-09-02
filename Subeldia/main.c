#include <stdio.h>
#include <stdlib.h>

///prototipos
void menu();
void sumar(int numeroA,int numeroB);
void restar(int numeroA,int numeroB);
void dividir(int numeroA,int numeroB);
void multiplicar(int numeroA,int numeroB);
void factorearA(int numeroA);
void factorearB(int numeroB);

int main()
{
    ///llamada
    menu();

    return 0;
}

void menu()
{
    int numeroA = 0;
    int numeroB = 0;
    char opcion;
    char salir;

    do
    {
        system("cls");

        printf("1. Ingresar 1er operando (A = %d)\n", numeroA);
        printf("2. Ingresar 2do operando (B = %d)\n", numeroB);
        printf("3. Calcular todas las operaciones\n");
        printf("    a) Calcular la suma (A + B)\n");
        printf("    b) Calcular la resta (A - B)\n");
        printf("    c) Calcular la division (A / B)\n");
        printf("    d) Calcular la multiplicacion (A * B)\n");
        printf("    e) Calcular el factorial (A!)\n");
        printf("4. Informar resultados\n");
        printf("    a) El resultado de A + B es: r\n");
        printf("    b) El resultado de A - B es: r\n");
        printf("    c) El resultado de A / B es: r \n");
        printf("    d) El resultado de A * B es: r\n");
        printf("    e) El factorial de A es: r1 y El factorial de B es: r2\n");
        printf("5. Salir\n");
        printf("Coloque la opcion\n");
        fflush(stdin);
        scanf("%c", &opcion);

        if (opcion != '5')
        {
            printf("Coloque el primer numero\n");
            scanf("%d", &numeroA);
            printf("Coloque el segundo numero\n");
            scanf("%d", &numeroB);
        }

        switch (opcion)
        {
            case 'a':
                sumar(numeroA, numeroB);
                break;
            case 'b':
                restar(numeroA, numeroB);
                break;
            case 'c':
                dividir(numeroA, numeroB);
                break;
            case 'd':
                multiplicar(numeroA, numeroB);
                break;
    /*        case 'e':
                factorearA(numeroA);
                factorearB(numeroB);
                brak;*/
            case '5':
                printf("Seguro quiere salir?\n");
                fflush(stdin);
                scanf("%c", &salir);
                break;
            default:
                printf("OPCION INVALIDA");
        }
        system("pause");
    }
    while(salir != 's');

}

void sumar(int numeroA,int numeroB)
{
    printf("a) El resultado de %d + %d es: %d\n", numeroA, numeroB,(numeroA + numeroB));
}
void restar(int numeroA,int numeroB)
{
    printf("b) El resultado de %d - %d es: %d\n", numeroA, numeroB,(numeroA - numeroB));
}
void dividir(int numeroA,int numeroB)
{
    printf("c) El resultado de %d / %d es: %d\n", numeroA, numeroB,(numeroA / numeroB));
}
void multiplicar(int numeroA,int numeroB)
{
    printf("d) El resultado de %d * %d es: %d\n", numeroA, numeroB,(numeroA * numeroB));
}
/*void factorearA(int numeroA)
{
    printf("e) “El factorial de A es: r1 y El factorial de B es: r2\n");
}
void factorearB(int numeroB)
{

}*/


