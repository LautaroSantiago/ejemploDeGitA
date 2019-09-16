#include <stdio.h>
#include <stdlib.h>
#include "Int.h"
#define cantidad 5

void IngresoNombre(char nombreAlumno[])
{
    int i;

    for(i = 0; i < cantidad; i++)
    {
        printf("\nColoque el nombre del alumno\n");
        fflush(stdin);
        gets(nombreAlumno);
        //strlwr(nombreAlumno);
    }
}

void IngresoSilla(int numeroSilla[])
{
    int i;

    for(i = 0; i < cantidad; i++)
    {
        printf("\nColoque el numero de la silla\n");
        scanf("%d", &numeroSilla[i]);
    }
}

void IngresoEdad(int edadAlumno[])
{
    int i;

    for(i = 0; i < cantidad; i++)
    {
        printf("\n\tColoque la edad del alumno\n");
        scanf("%d", &edadAlumno[i]);
    }
}

void IngresoLegajo(int legajoAlumno[])
{
    int i;

    for(i = 0; i < cantidad; i++)
    {
        printf("\n\t\tColoque el legajo del alumno\n");
        scanf("%d", &legajoAlumno[i]);
    }
}

int SillaMayor(int numeroDeSilla[])
{
    int elMaximo;
    int i;
    int flag0 = 0;

    for(i = 0; i < cantidad; i++)
    {
        if(numeroDeSilla[i] > elMaximo || flag0 == 0)
        {
            elMaximo = numeroDeSilla[i];
            flag0 = 1;
        }
    }
    return elMaximo;
}

char LetraPrimera(char nombreAlumno[])
{
    char laPrimera;
    int i;
    //int flag5 = 0;

    for(i = 0; i < cantidad; i++)
    {
        laPrimera = toupper(nombreAlumno[0]);
        /*if(nombreAlumno[0] && flag5 == 0){
            strcpy(laPrimera, nombreAlumno);
            toupper(laPrimera);
            flag5 = 1;
        }*/
    }
    return laPrimera;
}

char LetraSiguiente(char nombreAlumno[])
{
    char laSiguiente;
    int i;
    int flag6 = 0;

    for(i = 0; i < cantidad; i++)
    {
        if(nombreAlumno[0] && flag6 == 0)
        {
            strcpy(laSiguiente, nombreAlumno);
            toupper(laSiguiente);
            flag6 = 1;
        }
    }
    return laSiguiente;
}

int SillaMenor(int numeroDeSilla[])
{
    int elMinimo;
    int i;
    int flag1 = 0;

    for(i = 0; i < cantidad; i++)
    {
       if(numeroDeSilla[i] < elMinimo || flag1 == 0)
        {
            elMinimo = numeroDeSilla[i];
            flag1 = 1;
        }
    }
    return elMinimo;
}

int EdadMayor(int edadAlumno[], int legajoAlumno[])
{
    int elMaximoEdad;
    int elMaximoLegajo;

    int i;
    int flag2 = 0;

    for(i = 0; i < cantidad; i++)
    {
        if(edadAlumno[i] > elMaximoEdad || flag2 == 0)
        {
            elMaximoEdad = edadAlumno[i];
            elMaximoLegajo = legajoAlumno[i];
            flag2 = 1;
        }
    }
    return elMaximoEdad;
}

int LegajoMayor(int legajoAlumno[], int edadAlumno[])
{
    int elMaximoLegajo;
    int elMaximoEdad;
    int i;
    int flag3 = 0;

    for(i = 0; i < cantidad; i++)
    {
        if(legajoAlumno[i] > elMaximoLegajo || flag3 == 0)
        {
            elMaximoLegajo = legajoAlumno[i];
            elMaximoEdad = edadAlumno[i];
            flag3 = 1;
        }
    }
    return elMaximoLegajo;
}

void MostrarMayor(int respuestaMayor)
{
    printf("\nLa silla maxima %d\n", respuestaMayor);
}

void MostrarPrimera(char nombreAlumno)
{
    printf("\nEl nombre del alumno es %c", nombreAlumno);
}

void MostrarResto(char nombreAlumno[])
{
    printf("%s\n", nombreAlumno);
}

void MostrarMenor(int respuestaMenor)
{
    printf("\nLa silla minima %d\n", respuestaMenor);
}

void MostrarMayorEdad(int respuestaMayorEdad, int respuestaMayorEdadLegajo)
{
    ///tomar maximo valor desde la funcion e igualo a la variable
//    respuestaMayorEdadLegajo = EdadMayor(legajo);

    printf("\nLa edad mayor %d y su legajo es %d\n", respuestaMayorEdad, respuestaMayorEdadLegajo);
}
void MostrarMayorLegajo(int respuestaMayorLagajo, int respuestaMayorLegajoEdad)
{
//    respuestaMayorLegajoEdad = LegajoMayor(edad);

    printf("\nEl legajo mayor %d y su edad es %d\n", respuestaMayorLagajo, respuestaMayorLegajoEdad);
}
