#include <stdio.h>
#include <stdlib.h>
#include "PedirDatos.h"
#include "Peliculas.h"
#define CANTIDAD_PELICULAS 1000


int main()
{

    //eFecha fechasEstreno[CANTIDAD_PELICULAS];
    int idPeliculas;
    eGenero listaGeneros[5];
    eActores listaActores[10];
    ePelicula listaPeliculas[CANTIDAD_PELICULAS];
    inicializarPeliculas(listaPeliculas,CANTIDAD_PELICULAS);
    harcodearPeliculas(listaPeliculas,7);
    harcodearGenero(listaGeneros,5);
    harcodearActores(listaActores,10);
    int opcion;
    do
    {
        opcion=pedirEntero("\n1.ALTA\n2.MODIFICAR\n3.BAJA\n4.LISTAR\n5.SALIR\nIngrese Opcion: ");
        switch(opcion)
        {
            case 1:
                  CargarPelicula(listaPeliculas,CANTIDAD_PELICULAS,listaGeneros,5,listaActores,10);

                break;
            case 2:
                mostrarListaPeliculas(listaPeliculas,CANTIDAD_PELICULAS,listaGeneros,5,listaActores,10);
                idPeliculas=pedirEntero("Ingrese Id de la Pelicula: ");
                modificarPeliculas(listaPeliculas,CANTIDAD_PELICULAS,idPeliculas,listaActores,10);


                break;

            case 3:
                mostrarListaPeliculas(listaPeliculas,CANTIDAD_PELICULAS,listaGeneros,5,listaActores,10);
                idPeliculas=pedirEntero("Ingrese Id de la Pelicula: ");
                BorrarPelicula(listaPeliculas,CANTIDAD_PELICULAS,idPeliculas);

                break;
            case 4:


                break;

        }

    }while(opcion!=5);

    return 0;
}
