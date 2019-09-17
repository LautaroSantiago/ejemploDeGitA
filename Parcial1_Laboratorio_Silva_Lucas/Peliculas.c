#include "Peliculas.h"
#include "PedirDatos.h"
#include <string.h>
#include <stdlib.h>

void inicializarPeliculas(ePelicula listaPeliculas[],int largo)
{
    int i;
    for(i=0;i<largo;i++)
    {
        listaPeliculas[i].estado=LIBRE;

    }
}
int BuscarLibre(ePelicula listaPeliculas[],int largo)
{
    int indice=-1;
    int i;
    for(i=0;i<largo;i++)
    {
        if(listaPeliculas[i].estado==LIBRE)
        {
            indice=i;
            break;
        }
    }
    return indice;
}
int BuscarUno(ePelicula listaPeliculas[],int largo,int idPelicula)
{
    int i;
    int indice=-1;
    for(i=0;i<largo;i++)
    {
       if(listaPeliculas[i].id==idPelicula&&listaPeliculas[i].estado==OCUPADO)
       {
           indice=i;
           break;
       }
    }
    return indice;
}

void CargarPelicula(ePelicula listaPeliculas[],int largoPeliculas,eGenero listaGeneros[],int largoGenero,eActores actores[],int largoActores)
{
    char anio[20];
    char mes[10];
    char dia[10];



    int i;
    i=BuscarLibre(listaPeliculas,largoPeliculas);
    if(i!=-1)
    {
        listaPeliculas[i].id=largoPeliculas+i;
        pedirCadena("Ingrese Titulo de pelicula: ",listaPeliculas[i].titulo);
        if(getStringNumeros("Ingrese anio de estreno: ",anio))
        {
            listaPeliculas[i].fechaEstreno.anio=atoi(anio);

            if(getStringNumeros("Ingrese Mes de estreno: ",mes))
             {
                 listaPeliculas[i].fechaEstreno.mes=atoi(mes);
                 if(!getStringNumeros("Ingrese dia de estreno: ",dia))
                  {
                      listaPeliculas[i].fechaEstreno.dia=atoi(dia);


                  }

             }

        }
        else
        {
          printf("El anio Debe estar compuesto solo por Numeros!!!\n");
        }



        //listaPeliculas[i].fechaEstreno.anio=atoi(anio);
        //listaPeliculas[i].fechaEstreno.mes=atoi(mes);
        //listaPeliculas[i].fechaEstreno.mes=atoi(dia);
        listaPeliculas[i].genero=pedirGenero(listaGeneros,largoGenero);
        listaPeliculas[i].actor=pedirActor(actores,largoActores);
        listaPeliculas[i].estado=OCUPADO;


    }
    else
    {
        printf("NO HAY ESPACIO!!!\n");
    }

}
int pedirGenero(eGenero listaGeneros[],int largo)
{
    int i;
    int genero;
    printf("Ingrese un Genero: \n");
    for(i=0;i<largo;i++)
    {
        printf("%d--%s\n",listaGeneros[i].idGenero,listaGeneros[i].tipoDeGenero);
    }
    scanf("%d",&genero);
    return genero;
}
int pedirActor(eActores listaActores[],int largo)
{
    int i;
    int actor;
    printf("Ingrese un Actor/Actriz: \n");
    for(i=0;i<largo;i++)
    {
        printf("%d--%s--%s\n",listaActores[i].idActor,listaActores[i].nombreActor,listaActores[i].paisOrigen);
    }
    scanf("%d",&actor);
    return actor;
}
void harcodearPeliculas(ePelicula listaPeliculas[],int largo)
{
    int i;
    int id[]={1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1014,1015,1016,1017,1018,1019,1020};
    char titulo[][50]={"Avengers EndGame","Thor","Cellular","Men in Black 4","IronMan","13  Going on 30","Lucy"};
    int dia[]={20,10,2,10,5,7};
    int mes[]={4,6,5,7,9,5};
    int anio[]={2019,2013,2004,2019,2012,2004};
    int genero[]={1,1,1,1,1,4};
    int actor[]={2,5,4,5,2,3};

    for(i=0; i<largo; i++)
    {
        listaPeliculas[i].id = id[i];
        strcpy(listaPeliculas[i].titulo,titulo[i]);
        listaPeliculas[i].fechaEstreno.dia = dia[i];
        listaPeliculas[i].fechaEstreno.mes = mes[i];
        listaPeliculas[i].fechaEstreno.anio =anio[i];
        listaPeliculas[i].genero = genero[i];
        listaPeliculas[i].actor = actor[i];
        listaPeliculas[i].estado=OCUPADO;
    }
}
void harcodearGenero(eGenero listaGenero[],int largo)
{
    int i;
    int idGenero[]={1,2,3,4,5};
    char tipoGenero[][50]={"Accion","Comedia","Drama","Romance","Terror"};
    for(i=0; i<largo; i++)
    {
        listaGenero[i].idGenero = idGenero[i];
        strcpy(listaGenero[i].tipoDeGenero,tipoGenero[i]);
    }
}
void harcodearActores(eActores listaActores[],int largo)
{
    int i;
    int idActor[]={1,2,3,4,5,6,7,8,9,10};
    char nombreActor[][50]={"Scarlett Johansson","Robert  Downey Jr","Mark Ruffalo","Chris Evans","Chris Hemsworth","Samuel Jackson","Gwyneth Paltrow","Paul Rudd","Bradley Cooper","Josh Brolin"};
    char paisOrigen[][50]={"Argentina","EEUU","Canada","EEUU","Argentina","EEUU","Canada","Argentina","EEUU","Canada"};
    for(i=0; i<largo; i++)
    {
        listaActores[i].idActor = idActor[i];
        strcpy(listaActores[i].nombreActor,nombreActor[i]);
        strcpy(listaActores[i].paisOrigen,paisOrigen[i]);
    }
}
void BorrarPelicula(ePelicula listaPeliculas[],int largo,int idPelicula)
{
    int indice;
    char confirmar;
    indice=BuscarUno(listaPeliculas,largo,idPelicula);
    if (indice!=-1)
    {
        confirmar=pedirCaracter("Estas seguro que desea dar de BAJA? (s/n): ");
        if (confirmar=='s')
        {
            listaPeliculas[indice].estado=LIBRE;
        }
    }
    else
    {
        printf("NO SE ENCONTRO!!\n");
    }
}
void mostrarPelicula(ePelicula unaPelicula,eGenero listaGenero[], int largoGenero,eActores listaActores[],int largoActores)
{
    char genero[20];
    char actor[50];
    int i;

    for(i=0; i<largoGenero; i++)
    {
        if(unaPelicula.genero==listaGenero[i].idGenero)
        {
            strcpy(genero,listaGenero[i].tipoDeGenero);
            break;
        }
    }
    for(i=0;i<largoActores;i++)
    {
        if(unaPelicula.actor==listaActores[i].idActor)
        {
            strcpy(actor,listaActores[i].nombreActor);
            break;
        }
    }
    printf("%d  %s  %d/%d/%d  %s  %s\n", unaPelicula.id,unaPelicula.titulo,unaPelicula.fechaEstreno.dia,unaPelicula.fechaEstreno.mes,unaPelicula.fechaEstreno.anio,genero,actor);
}
void mostrarListaPeliculas(ePelicula listaPelicula[],int largoPelicula,eGenero listaGenero[],int largoGenero,eActores listaActores[],int largoActores)
{
    int i;
    for(i=0; i<largoPelicula; i++)
    {
        if(listaPelicula[i].estado!=LIBRE)
        {
            mostrarPelicula(listaPelicula[i],listaGenero,largoGenero,listaActores,largoActores);
        }
    }
}
void modificarPeliculas(ePelicula listaPelicula [],int largoPelicula, int idPelicula,eActores listaActores[],int largoActores)
{
    int indice;
    indice=BuscarUno(listaPelicula,largoPelicula,idPelicula);
    if (indice!=-1)
        {
            menuModificarPeliculas(listaPelicula,indice,listaActores,largoActores);
        }
        else
        {
            printf("NO SE ENCONTRO!!!\n");
        }
}
void menuModificarPeliculas(ePelicula listaPeliculas[],int indice,eActores listaActores[],int largoActores)
{
    char titulo[20];
    int dia;
    int mes;
    int anio;
    int actor;
    char confirmar;
    int opcion;
    do
    {
        opcion = pedirEntero("1.Titulo\n2.Fecha De Estreno\n3.Actor\n4.Salir\nElija una opcion a modificar: ");
        switch(opcion)
        {
            case 1:
                confirmar=pedirCaracter("Estas seguro que desea modificar el Titulo? (s/n): ");
                if(confirmar=='s')
                {
                    pedirCadena("Ingrese Nuevo Titulo: ",titulo);
                    confirmar=pedirCaracter("Estas seguro que desea modificar el NOMBRE? (s/n): ");
                    if(confirmar=='s')
                    {
                        strcpy(listaPeliculas[indice].titulo,titulo);
                    }
                    else
                    {
                         break;
                    }
                }
            break;
            case 2:
                confirmar=pedirCaracter("Estas seguro que desea modificar la Fecha? (s/n): ");

                if (confirmar=='s')
                {
                    anio=pedirEntero("Ingrese Anio: ");
                    mes=pedirEntero("Ingrese Mes: ");
                    dia=pedirEntero("Ingrese Dia: ");
                    confirmar=pedirCaracter("Estas seguro que desea modificar la Fecha? (s/n): ");
                    if (confirmar=='s')
                    {
                        listaPeliculas[indice].fechaEstreno.anio=anio;
                        listaPeliculas[indice].fechaEstreno.mes=mes;
                        listaPeliculas[indice].fechaEstreno.dia=dia;
                    }
                    else
                    {
                        break;
                    }
                }
                break;
            case 3:
                confirmar=pedirCaracter("Estas seguro que desea modificar el Actor? (s/n): ");
                if (confirmar=='s')
                {

                    actor=pedirActor(listaActores,largoActores);
                    confirmar=pedirCaracter("Estas seguro que desea modificar el Actor? (s/n): ");
                    if (confirmar=='s')
                    {
                        listaPeliculas[indice].actor=actor;
                    }
                    else
                    {
                        break;
                    }
                }
                break;
        }
    }while(opcion!=4);
}
