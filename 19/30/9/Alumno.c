#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"
//viiven en avellaneda
//localidad menos alumnos

int buscarLibre(eAlumno listadoDeAlumnos[], int tam)
{

    int indice = -1;
    int i;

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].estado!=OCUPADO)
        {
            indice = i;
            break;
        }
    }
    return indice;

}


void hardCodearAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int legajo[]= {101,102,105};
    float promedio[]= {6.66, 4,7.66};
    char nombre[][25]= {"Juan","Maria josefina","Maria"};
    int localidad[]={1,1,3};
    for(i=0; i<3; i++)
    {
        listadoDeAlumnos[i].legajo = legajo[i];
        listadoDeAlumnos[i].promedio = promedio[i];
        strcpy(listadoDeAlumnos[i].nombre, nombre[i]);
        listadoDeAlumnos[i].estado = OCUPADO;
        listadoDeAlumnos[i].idLocalidad=localidad[i];

    }
}

/*void mostrarListadoAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].estado==OCUPADO)
        {
            mostrarUnAlumno(listadoDeAlumnos[i]);
        }

    }
}*/

void cargarListadoAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int indice;

    indice = buscarLibre(listadoDeAlumnos, tam);
    printf("Indice: %d\n", indice);
    if(indice!=-1)
    {
        //hay lugar
        listadoDeAlumnos[indice] = cargarAlumno();
    }
    else
    {
        printf("No hay espacio disponible");
    }

}

eAlumno cargarAlumno(void)
{
    eAlumno miAlumno;


    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    scanf("%[^\n]", miAlumno.nombre);
    printf("Ingrese promedio: ");
    scanf("%f", &miAlumno.promedio);
    printf("En que localidad vive?");
    scanf("%d", &miAlumno.idLocalidad);

    miAlumno.estado = OCUPADO;

    return miAlumno;
}

void mostrarUnAlumno(eAlumno miAlumno)
{
    printf("%4d %25s %8.2f %4d\n",miAlumno.legajo,miAlumno.nombre, miAlumno.promedio, miAlumno.idLocalidad);
}

void sortStudentsByNameAndAverage(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int j;
    eAlumno auxAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listadoDeAlumnos[i].nombre,listadoDeAlumnos[j].nombre)>0)
            {
                auxAlumno = listadoDeAlumnos[i];
                listadoDeAlumnos[i] = listadoDeAlumnos[j];
                listadoDeAlumnos[j] = auxAlumno;
            }

            else
            {
                if(strcmp(listadoDeAlumnos[i].nombre,listadoDeAlumnos[j].nombre)==0)
                {
                    if(listadoDeAlumnos[i].promedio>listadoDeAlumnos[j].promedio)
                    {
                        auxAlumno = listadoDeAlumnos[i];
                        listadoDeAlumnos[i] = listadoDeAlumnos[j];
                        listadoDeAlumnos[j] = auxAlumno;
                    }
                }
            }
        }

    }
}

int buscarAlumnoPorLegajo(eAlumno* listaDeAlumnos, int cant, int legajo)
{
    int i;
    int retorno = -1;

    if(listaDeAlumnos!=NULL && cant>0)
    {
        for(i=0; i<cant; i++)
        {
            if(listaDeAlumnos[i].legajo==legajo && listaDeAlumnos[i].estado==OCUPADO)
            {
                retorno = i;
                break;
            }
        }
    }


    return retorno;
}

int modificarAlumno(eAlumno listaDeAlumnos[], int cant, int legajo)
{
    int index;
    char nombre[30];
    int quePaso = -1;
    char respuesta;
    eAlumno aux;

    index = buscarAlumnoPorLegajo(listaDeAlumnos,cant, legajo);
    if(index!=-1)
    {
        aux = listaDeAlumnos[index];
        mostrarUnAlumno(aux);
        printf("Ingrese el nuevo nombre: ");
        fflush(stdin);
        gets(aux.nombre);
        printf("Esta seguro que desea modificar este alumno? :");
        respuesta = getche();
        if(respuesta=='s')
        {
            listaDeAlumnos[index] = aux;
            quePaso = 1;
        }
        else
        {
            quePaso = 0;
        }

    }
    return quePaso;
}
int eliminarAlumno(eAlumno listadoDeAlumnos[], int tam)
{
    int legajo;
    int i;
    int flag = 0 ;
    char respuesta;

    int quePaso = -1;

    mostrarListadoAlumnos(listadoDeAlumnos,tam);

    printf("Ingrese el legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].legajo==legajo && listadoDeAlumnos[i].estado==OCUPADO)
        {
            mostrarUnAlumno(listadoDeAlumnos[i]);
            printf("Esta seguro que desea eliminar este alumno? :");
            respuesta = getche();
            if(respuesta=='s')
            {
                listadoDeAlumnos[i].estado = LIBRE;
                quePaso = 1;
            }
            else
            {
                quePaso = 0;
            }
            break;
        }

    }

    return quePaso;

}

void mostrarListadoAlumnosConLocalidad(eAlumno listadoDeAlumnos[], int ta, eLocalidad listadoLocalidad[], int tl)
{
    int i;
    int j;
    int aux;

    for(j = 0; j < tl; j++)
    {
        if(true == (eLocalidad[j].idLocalidad == eAlumno[i].idLocalidad))
        {
            aux = eLocalidad.idLocalidad;
            break;
        }
    }
}

/*
int localidadV(eLocalidad unaLocalidad)
{
    int index = -1;

    if(index != -1)
    {
        for()
        {
            for()
            {

            }
        }
    }


    return index;
}
*/

/*
int laLocalidadV(eAlumno listadoAlumno[], int ta, eLocalidad listadoLocalidad[], int tl)
{
    int index = -1;
    int i;
    eLocalidad unaLocalidad;//le paso una copia del dato desde otra funcion

    if(index != -1)
    {
        for(i = 0; i < tl; i++)
        {
            index = mostrarListadoAlumnos();
        }
    }
}*/
//viiven en avellaneda
//localidad menos alumnos


int BuscarLocalidadPorLegajo(eLocalidad listadoLocalidad[], eAlumno listaDeAlumnos[], int tl, char laLocalidad)
{
    int index;
    int retorno = -1;

    if(listadoLocalidad != NULL && tl>0)
    {
        for(index = 0; index < tl; index++)
        {
            if(listaDeAlumnos[index].legajo == legajo && listaDeAlumnos[index].estado == OCUPADO && listadoLocalidad[index].idLocalidad == laLocalidad)
            {
                listadoLocalidad.contadorLocalidad = listadoLocalidad[index];
                retorno = listadoLocalidad.contadorLocalidad;
                break;
            }
        }
    }

    return retorno;
}


int maximoAlumnosLocalidad(eLocalidad listadoLocalidad[], eAlumno listaDeAlumnos[], int tl, int id, char laLocalidad)
{

    int index;
    //int maximoCantidadAlumnos = 0;
    int maximoCantidadCont = 0;
    int flag = 0;
    eLocalidad contLoc = 0;

    //contLoc = BuscarLocalidadPorLegajo(listadoLocalidad, listaDeAlumnos, tl, id, laLocalidad);

    for(index = 0; index < tl; index++)
    {
        if(listadoLocalidad[index].maximoAumnos > listadoLocalidad[index].maximoAumnos || flag == 0)
        {
            maximoCantidadAlumnos = listadoLocalidad[index].maximoAumnos;
            flag = 1;
        }
    }

    return maximoCantidadAlumnos;
}











