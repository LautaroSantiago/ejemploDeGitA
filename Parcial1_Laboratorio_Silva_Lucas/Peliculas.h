#include <stdio.h>
#define LIBRE 0
#define OCUPADO 1


typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;
typedef struct
{
    int idGenero;
    char tipoDeGenero[50];
}eGenero;
typedef struct
{
    int idActor;
    char nombreActor[50];
    char paisOrigen[50];
}eActores;
typedef struct
{
    int id;
    char titulo[50];
    eFecha fechaEstreno;
    int genero;
    int actor;
    int estado;
}ePelicula;

void inicializarPeliculas(ePelicula[],int);
int BuscarLibre(ePelicula[],int);
int BuscarUno(ePelicula[],int,int);
void CargarPelicula(ePelicula[],int,eGenero[],int,eActores[],int);
int pedirGenero(eGenero[],int);
int pedirActor(eActores[],int);
void harcodearPeliculas(ePelicula[],int);
void harcodearGenero(eGenero[],int);
void harcodearActores(eActores[],int);
void BorrarPelicula(ePelicula listaPeliculas[],int,int);
void mostrarPelicula(ePelicula unaPelicula,eGenero listaGenero[], int largoGenero,eActores listaActores[],int largoActores);
void mostrarListaPeliculas(ePelicula[],int,eGenero[],int,eActores[],int);
void modificarPeliculas(ePelicula[],int,int,eActores[],int);
void menuModificarPeliculas(ePelicula[],int,eActores[],int);
int idPeliculasAleatorio(ePelicula[],int);


