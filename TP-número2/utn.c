#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define FREE 1
#define OCCUPIED 0

int initEmployees(Employee List[], int len)///inicializar
{
    int index;
    int returno = 1;

    if(len > 0)
    {
        for(index = 0; index < len; index++)
        {
            List[index].id = FREE;
            strcpy(List[index].name, "");
            strcpy(List[index].lastName, "");
            List[index].isEmpty = FREE;
            List[index].sector = FREE;
            List[index].salary = FREE;
        }
        returno = 0;
    }

    return returno;
}

int searchFree(Employee List[], int len) ///busca libre
{
    int index;
    int returno = -1;

    if(len > 0)
    {
        for(index = 0; index < len; index++)
        {
            if(List[index].isEmpty == FREE)
            {
                returno = index;
                break;
            }
        }
    }

    return returno;
}

int addEmployee(Employee List[], int len, int id, char name[], char lastName[], float salary, int sector) ///alta empleado
{
    int index;
    int returno = -1;

    index = searchFree(List, len);

    if(index != -1)
    {
        List[index].id = id;
        strcpy(List[index].name, name);
        strcpy(List[index].lastName, name);
        List[index].salary = salary;
        List[index].isEmpty = OCCUPIED;
        List[index].sector = sector;
    }

    return returno;
}

int findEmployeeById(Employee List[], int len,int id)///busca id igual
{
    int index;
    int returno = NULL;

    if(len > 0 && List != NULL)///
    {
        for(index = 0; index < len; index++)
        {
            if(List[index].id == id)
            {
                returno = index;
                break;
            }
        }
    }

    return returno;
}

void showEmployee(Employee TheEmployee)
{
    if(TheEmployee.isEmpty == OCCUPIED)
    {
        printf("%d %s %s %.2f" , TheEmployee.id, TheEmployee.name, TheEmployee.lastName, TheEmployee.salary);
    }
}

void showEmployees(Employee List[], int len)
{
    int index;

    if(len > 0)
    {
        for(index = 0; index < len; index++)
        {
            if(List[index].isEmpty == OCCUPIED)
            {
                printf("%d %s %s %.2f\n" , List[index].id, List[index].name, List[index].lastName, List[index].salary);
            }
        }
    }
}

int removeEmployee(Employee List[], int len, int id)
{
    int index;
    int returno = -1;
    char eliminar;

    index = findEmployeeById(List, len, id);///pasa valor de posicion al index

    if(index != -1)
    {
        showEmployee(List[index]);
        printf("Seguro quiere eliminar a un laburante? oprima 's'");
        scanf("%c", &eliminar);

        if(eliminar == 's')
        {
            List[index].isEmpty = FREE;
             returno = 1;
        }
        }

    return -1;
}

