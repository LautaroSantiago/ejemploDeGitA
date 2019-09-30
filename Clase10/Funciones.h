//#ifndef FUNCIONES_H_INCLUDED
//#define FUNCIONES_H_INCLUDED
typedef struct
{
int estaVacio;
    int legajo;
    int nota;
    char nombre[51];
}eAlumno;
typedef struct
{
    int idLocalidad;
    int codigoPostal;
    char descripcion[51];

}eLocalidad;


int getInt(char mensaje[]);
int initEmployees(Employee lista[], int len);
void ordenarInsercion(eAlumno unArray[],int tam);
void harcodearAlumnos(eAlumno unArray[]);
int buscarSoloEstado(eAlumno unArray[],int tam,int estado);
void mostrarUnSoloAlumno(eAlumno unAlumno[],int indice);
void mostrarLista(eAlumno unArray[],int tam);
void cargarDatos(eAlumno unArray[],int tam);
void borrarDatos(eAlumno unArray[],int tam);
int buscarLegajo(eAlumno unArray[],int tam,int legajo);
void modificarDatos(eAlumno unArray[],int tam);

#endif // FUNCIONES_H_INCLUDED
