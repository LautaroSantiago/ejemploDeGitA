#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utn.h"

typedef struct
{

    int legajo[20];
    char elNombre[20];
    char elApellido[20];
    float salario[20];

}eEmployee;

eEmployee* new_employee()
{

    eEmployee* p;

    //p = (void*) malloc(sizeof(eEmployee));
    p = (eEmployee*) malloc(sizeof(eEmployee));

    return p;
}

/**1**/



int main()
{
    /**2**/
                ///que es un parser
                ///strtok
                ///heap
                ///memoria dinamica
                ///stack
                ///malok
                ///constructor
                ///atoi
                ///atof

    //eEmployee** list[50];
    eEmployee* list[50];
    eEmployee* unEmpleado = new_employee();

    FILE* pArchivo;
    char legajo[20];
    char nombre[20];
    char apellido[20];
    char sueldo[20];

    pArchivo = fopen("datos.csv", "r");

    fscanf(pArchivo "%[^,],%[^,],%[^,],%[^\n]\n",legajo,nombre,apellido,sueldo);

    while(!feof(pArchivo))
    {
        fscanf(pArchivo "%[^,],%[^,],%[^,],%[^\n]\n",legajo,nombre,apellido,sueldo);
        //printf("%s-%s-%s-%s\n",legajo,nombre,apellido,sueldo);
        unEmpleado->legajo=atoi(legajo);
        strcpy(unEmpleado->nombre,nombre);
        strcpy(unEmpleado->apellido,apellido);
        unEmpleado->salario=atof(sueldo);

        eEmployee* unEmpleado = new_employee();
        list[i] =unEmpleado;
        i++;
    }

    fsclose(pArchivo);

    for(i=0;i<50;i++)
    {
        printf("%s-%s-%s-%s\n",list[i]->legajo,list[i]->elNombre,list[i]->elApellido,list[i]->salario);
    }






/*
    ///1ro
    ///ESCRIBIR
    char miNombre[50] = "German";
    int k = 9;

    pArchivo = fopen("miArchivo.dat", "wb");///es imdistinto el .dat

     if(pArchivo != NULL)
    {
     ///fwrite(&k); ///pregunta donde esta el dATO
        fwrite(&k, sizeof(char), 1, pArchivo);
     ///fwrite(VOID(CUALQUIER ARCHIVO), TIPO DE DATO, CUANTOS ELEMETOS, A DONDE);

        fclose(pArchivo);
    }
*/

    ///2do
    ///LEER

    int x;
    char miNombre[50] = "German";

    pArchivo = fopen("miArchivo.txt", "rb");//rb para binario

     if(pArchivo != NULL)
    {
        while(!feof(pArchivo))
        {
             fread(x,  sizeof(int), 1, pArchivo);

             printf("%d", x);
        }

        fclose(pArchivo);
    }

    return 0;
}




































































































































































/*
///1
void inicializarArrayPersonas(Persona arrayPersonas[],int cantidadDeElementos,int valor);
int buscarPrimerOcurrencia(Persona arrayPersonas[],int cantidadDeElementos,int valor);
*/

/*
///2
    Persona arrayPersonas[QTY_PERSONAS];
    Persona auxiliarCliente;

    char auxiliarNombreStr[50];
    char auxiliarApellidoStr[50];
    char auxiliarLegajoStr[50];
    int auxiliarLegajo;

    int indiceLugarLibre;
    int indiceResultadoBusqueda;
    int opcion = 0;

    int i,j;

    inicializarArrayPersonas(arrayPersonas,QTY_PERSONAS,-1); /**< Se indica con -1 que esa posicion esta vacia
    while(opcion != 6)
    {
         opcion = getInt("\n\n\n1 - ALTA \n2 - BAJA \n3 - MODIFICACION\n4 - LISTAR\n5 - ORDENAR\n6 - SALIR\n\n\n");
         switch(opcion)
         {
            case 1:

                indiceLugarLibre = buscarPrimerOcurrencia(arrayPersonas,QTY_PERSONAS,-1);
                if(indiceLugarLibre == -1)
                {
                    printf("\n\nNO QUEDAN LUGARES LIBRES!!!\n");
                    break;
                }

                printf("\nALTA\n");
                if (!getStringLetras("Ingrese el nombre: ",auxiliarNombreStr))
                {
                    printf ("El nombre debe estar compuesto solo por letras\n");
                    break;
                }

                if (!getStringLetras("Ingrese el apellido: ",auxiliarApellidoStr))
                {
                    printf ("El apellido debe estar compuesto solo por letras\n");
                    break;
                }

                if (!getStringNumeros("Ingrese el legajo: ",auxiliarLegajoStr))
                {
                    printf ("El legajo debe ser numerico\n");
                    break;
                }
                auxiliarLegajo = atoi(auxiliarLegajoStr);

                if(buscarPrimerOcurrencia(arrayPersonas,QTY_PERSONAS,auxiliarLegajo) != -1)
                {
                    printf("\n\nEL LEGAJO YA EXISTE!!!\n");
                    break;
                }


                strcpy(arrayPersonas[indiceLugarLibre].nombre,auxiliarNombreStr);
                strcpy(arrayPersonas[indiceLugarLibre].apellido,auxiliarApellidoStr);
                arrayPersonas[indiceLugarLibre].legajo = auxiliarLegajo;

                break;

            case 2:
                if (!getStringNumeros("Ingrese el legajo a dar de baja: ",auxiliarLegajoStr))
                {
                    printf ("El legajo debe ser numerico\n");
                    break;
                }
                indiceResultadoBusqueda = buscarPrimerOcurrencia(arrayPersonas,QTY_PERSONAS,atoi(auxiliarLegajoStr));

                if(indiceResultadoBusqueda == -1)
                {
                    printf("\n\nNO SE ENCUENTRA ESE LEGAJO\n");
                    break;
                }
                arrayPersonas[indiceResultadoBusqueda].legajo=-1;
                break;

            case 3:
                if (!getStringNumeros("Ingrese el legajo a modificar: ",auxiliarLegajoStr))
                {
                    printf ("El legajo debe ser numerico\n");
                    break;
                }

                indiceResultadoBusqueda = buscarPrimerOcurrencia(arrayPersonas,QTY_PERSONAS,atoi(auxiliarLegajoStr));

                if(indiceResultadoBusqueda == -1)
                {
                    printf("\n\nNO SE ENCUENTRA ESE LEGAJO\n");
                    break;
                }

                if (!getStringLetras("Ingrese el nombre: ",auxiliarNombreStr))
                {
                    printf ("El nombre debe estar compuesto solo por letras\n");
                    break;
                }

                if (!getStringLetras("Ingrese el apellido: ",auxiliarApellidoStr))
                {
                    printf ("El apellido debe estar compuesto solo por letras\n");
                    break;
                }

                strcpy(arrayPersonas[indiceResultadoBusqueda].nombre,auxiliarNombreStr);
                strcpy(arrayPersonas[indiceResultadoBusqueda].apellido,auxiliarApellidoStr);

                break;

            case 4:
                printf("\nLISTAR\n");
                for(i=0;i < QTY_PERSONAS; i++)
                {
                    if(arrayPersonas[i].legajo != -1)
                    {
                        printf("\n%s - %s - %d",arrayPersonas[i].nombre,arrayPersonas[i].apellido,arrayPersonas[i].legajo);
                    }
                }
                break;

            case 5:
                printf("\nORDENADO\n");

                for(i=0; i < QTY_PERSONAS - 1; i++)
                {
                    if(arrayPersonas[i].legajo == -1)
                    {
                        continue;
                    }
                    for(j=i+1; j < QTY_PERSONAS; j++)
                    {
                        if(arrayPersonas[j].legajo == -1)
                        {
                            continue;
                        }
                        if(strcmp(arrayPersonas[i].apellido,arrayPersonas[j].apellido) > 0)
                        {
                            auxiliarCliente = arrayPersonas[j];
                            arrayPersonas[j] = arrayPersonas[i];
                            arrayPersonas[i] = auxiliarCliente;
                        }
                    }
                }
                break;
         }
    }

*/
/*

void inicializarArrayPersonas(Persona arrayPersonas[],int cantidadDeElementos,int valor)
{
    int i;
    for(i=0;i < cantidadDeElementos; i++)
    {
        arrayPersonas[i].legajo = valor;
    }
}


int buscarPrimerOcurrencia(Persona arrayPersonas[],int cantidadDeElementos,int valor)
{
    int i;
    for(i=0;i < cantidadDeElementos; i++)
    {
        if(arrayPersonas[i].legajo == valor)
        {
            return i;
        }
    }
    return -1;
}
*/

