#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"
#define A 5

///verificar para que un dato sea valido
///asociar el id de la localidad con el del alumno
///pasar la localidad al alumno
///que la localidad se el dato `principal
///crear bibliotecas separadas del alumno con la localidad
///id autonumerico, contador, en el main una variable que recuerde el valor tomado por la posicion

///TP, usar necesariamente las variables de la consigna
///addEmployee(employee[], int, id, name, lastName, sal) ///getInt getChar getString biblioteca input
    ///pido los datos///construir el empleado y si esta bien lo agrego///PUNTEROS



int main()
{
    eAlumno listaDeAlumnos[A];
    eLocalidad listaLocalidades[3]={{1,"Avellaneda",1870},{2,"Wilde",1872},{3,"Lomas de Zamora",1700}};
    int i;
    /*for(i=0;i<3;i++)
    {
        printf("%d - %s - %d\n", listaLocalidades[i].idLocalidad,listaLocalidades[i].localidad,listaLocalidades[i].codigoPostal);
    }*/


    int respuesta;
    int opcion;
    eLocalidad localidad;

    for(i=0; i<A; i++)
    {
        listaDeAlumnos[i].estado=LIBRE;
    }

    hardCodearAlumnos(listaDeAlumnos,A);

    do
    {
        printf("1.Cargar\n2.Mostrar\n3.Ordenar\n4.Eliminar\n5.Modificar\n7.Salir");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarListadoAlumnos(listaDeAlumnos,A);

            break;
        case 2:
//            mostrarListadoAlumnos(listaDeAlumnos, A);
            mostrarListadoAlumnosConLocalidad(listaDeAlumnos, A, listaLocalidades, 3);
            break;
        case 3:
            sortStudentsByNameAndAverage(listaDeAlumnos,A);
            break;
        case 4:
            respuesta = eliminarAlumno(listaDeAlumnos,A);
            switch(respuesta)
            {
                case 0:
                    printf("Accion cancelada por el usuario\n");
                    break;
                case 1:
                    printf("Alumno eliminado\n");
                    break;
                case -1:
                    printf("Dato no encontrado\n");
                    break;
            }
            break;
        case 5:

            respuesta = modificarAlumno(listaDeAlumnos,A,102);
            switch(respuesta)
            {
                case 0:
                    printf("Accion cancelada por el usuario\n");
                    break;
                case 1:
                    printf("Alumno modificado\n");
                    break;
                case -1:
                    printf("Dato no encontrado\n");
                    break;
            }
            break;
        case 6:
            maximoAlumnosLocalidad(listaLocalidades ,listaDeAlumnos, A, listaDeAlumnos.legajo, localidad);
            break;
        }
    }
    while(opcion!=9);
    return 0;
}


