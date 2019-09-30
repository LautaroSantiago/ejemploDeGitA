#include <stdio.h>
#include <string.h>

#define LIBRE 0
#define OCUPADO 1
/*
typedef struct
{

    int dia;
    int mes;
    int anio;
} eFecha;
*/
typedef struct
{
    int maximoAumnos = 0;
    int idLocalidad;
    char localidad[30];
    int codigoPostal;
} eLocalidad;

typedef struct
{
    int legajo;
    char nombre[30];
    float promedio;
    int idLocalidad;
    int estado;
} eAlumno;

eAlumno cargarAlumno(void);
void mostrarUnAlumno(eAlumno);
int buscarLibre(eAlumno*, int);
void cargarListadoAlumnos(eAlumno[], int);
void mostrarListadoAlumnos(eAlumno[], int);
void hardCodearAlumnos(eAlumno[], int);
void sortStudentsByNameAndAverage(eAlumno[], int);
void mostrarListadoAlumnosConLocalidad(eAlumno listadoDeAlumnos[], int ta, eLocalidad listadoLocalidad[], int tl);

int eliminarAlumno(eAlumno[], int);
int modificarAlumno(eAlumno[], int, int);

int buscarAlumnoPorLegajo(eAlumno[], int, int);

int maximoAlumnosLocalidad(eLocalidad listadoLocalidad[], eAlumno listaDeAlumnos[], int tl, int id, char laLocalidad)
int BuscarLocalidadPorLegajo(eLocalidad listadoLocalidad[], eAlumno listaDeAlumnos[], int tl, int id, char laLocalidad)
