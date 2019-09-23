#include <stdio.h>
#include <stdlib.h>
#define ELEMENTS 5
///desarrollar...
///desarrollar...
///otra estrucutura con su id,
typedef struct
{

    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

} Employee;

int main()
{
    Employee arrayEmployees[ELEMENTS];
    int option;
    char cont = 's';

    initEmployees(arrayEmployees, ELEMENTS);
    addEmployee(arrayEmployees, ELEMENTS);

    return 0;
}

int initEmployees(Employee* list, int len)
{

    return 0;
}

int addEmployee(Employee* list, int len)
{
    int theId = {1,2,3};
    char theName[][51] = {"Juan", "Marcos", "Lucas"};
    char theLastName[][51];
    float theSalary = {100, 54, 12};
    int theSector = {2 ,4, 6};


    return -1;
}
