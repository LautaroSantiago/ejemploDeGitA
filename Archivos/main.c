#include <stdio.h>
#include <stdlib.h>
/*
abrir archivo
usarlo
cerrarlo
*/

typedef
int main()
{
    FILE* pArchivo;


    /*
    ///ESCRIBIR
    char miNombre[50] = "German";
    pArchivo = fopen("miArchivo.txt", "w");///resive 2 variables de puntero char
///decirle para que quiere abrir el archivo, anexar subir, escribir o leer form txt, binario "w" abrir formato txt, si existe lo sobreescribe, o si no lo crea//rb para binario

     if(pArchivo != NULL)
    {
        fprintf(pArchivo, miNombre);///indica que esta trabajano sobre un archivo
        fclose(pArchivo);///cierra archivo
    }
    */
    /// /// ///
    /*
    ///LEER
    char miNombre[50] = "German";

    pArchivo = fopen("miArchivo.txt", "r")//rb para binario
     if(pArchivo != NULL)
    {
        fgets(miNombre, 49, pArchivo); //uno menos por 0/  //fsacanf()
        printf("%s", miNombre);
    }
    */
    /// /// ///

    ///ESCRIBIR
    /*char miNombre[50] = "German";
    pArchivo = fopen("miArchivo.txt", "w");///resive 2 variables de puntero char

     if(pArchivo != NULL)
    {
        //fprintf(pArchivo, "Mi nombre es %s \n El dia esta nublado",miNombre);///indica que esta trabajano sobre un archivo
        fprintf(pArchivo, "Mi nombre es %s", miNombre);///indica que esta trabajano sobre un archivo
        fclose(pArchivo);///cierra archivo
    }
    */
      /*
        ///LEER
    char miNombre[50] = "German";

    pArchivo = fopen("miArchivo.txt", "r")//rb para binario

     if(pArchivo != NULL)
    {
        while(!feof(pArchivo))
        {
            fgets(miNombre, 49, pArchivo); //uno menos por 0/  //fsacanf()
            printf("%s", miNombre);
        }

        fclose(pArchivo);
    }*/
    /*///1ro
        ///ESCRIBIR
    char miNombre[50] = "German";
    int k = 9;

    pArchivo = fopen("miArchivo.dat", "wb");///es imdistinto el .dat

     if(pArchivo != NULL)
    {
        ///fwrite(&k); ///pregunta donde esta el dATO
        fwrite(&k, sizeof(char), 1, pArchivo);
///        fwrite(VOID(CUALQUIER ARCHIVO), TIPO DE DATO, CUANTOS ELEMETOS, A DONDE);

        fclose(pArchivo);
    }
    */
    /*
    ///2do
    ///LEER

     int x;
         char miNombre[50] = "German";

    pArchivo = fopen("miArchivo.txt", "rb")//rb para binario

     if(pArchivo != NULL)
    {
        while(!feof(pArchivo))
        {
             fread(x,  sizeof(int), 1, pArchivo);

             printf("%d", x);
        }

        fclose(pArchivo);
    }*/
    ///ESCRIBIR
    int vector[5] = {1,2,3,4};
    int i;

    ///leer
    whle(i=0; i<5; i++)
    {
            feof();///para leer dato * dato
    }
    return 0;


    /***
    TP 3: mockaroo genera datos


















    ***/
    // getchs();
