#include <stdio.h>
#include <stdlib.h>
#include "Int.h"
#define cantidad 5


int main()
{
    int silla[cantidad];
    int edad[cantidad];
    int legajo[cantidad];
    char nombre[cantidad];
    char nombrePrimeraLetra;
    char nombreSiguienteLetra[cantidad];
    int maximo;
    int minimo;
    int laEdadMaximo;
    int laEdadMaximoConLegajo;
    int elLegajoMaximo;
    int elLegajoMaximoConEdad;
/*
    char palabra[10] = "pcOjz";
    char mayus;
    char primeraLetra[1];
    int flag = 0;
    int i = 0;
    fflush(stdin);

    gets(palabra);
    strlwr(palabra);

    mayus = toupper (palabra[0]);

    if(palabra[0] && flag == 0)
    {
        strcpy(primeraLetra, palabra);
        toupper(primeraLetra);
        flag = 1;
    }

    printf("%c%s\n", mayus,palabra);
*/
    IngresoSilla(silla);
    IngresoEdad(edad);
    IngresoLegajo(legajo);
    IngresoNombre(nombre);

    nombrePrimeraLetra = LetraPrimera(nombre);
    nombreSiguienteLetra[cantidad] = LetraSiguiente(nombre);
    MostrarPrimera(nombrePrimeraLetra);
    MostrarResto(nombreSiguienteLetra);

    maximo = SillaMayor(silla);
    MostrarMayor(maximo);

    minimo = SillaMenor(silla);
    MostrarMenor(minimo);

    laEdadMaximo = EdadMayor(edad, legajo);
    MostrarMayorEdad(laEdadMaximo, laEdadMaximoConLegajo);

    elLegajoMaximo = LegajoMayor(legajo, edad);
    MostrarMayorLegajo(elLegajoMaximo, elLegajoMaximoConEdad);

    return 0;
}































/*
    for(i = 0; i < cantidad; i++)
    {
        if (silla[i] > maximo || flag == 0)
        {
            maximo = silla[i];
            flag = 1;
        }
        else if (silla[i] < minimo || flag1 == 0)
        {
            minimo = silla[i];
            flag1 = 1;
        }
    }
*/
