#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "utn.h"

/** \brief Parsea los datos de los empleados desde el archivo data.csv (modo texto).
*
 * \param path FILE* puntero al archivo a leer
 * \param pArrayListEmployee LinkedList* puntero a linkedlist
 * \return int 0 todo bien -1 error al guardar
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    int retorno=-1;
    char auxId[1024];
    char auxNombre[1024];
    char auxHoras[1024];
    char auxSueldo[1024];
    int flag=0;
    Employee* employees;
    if(pFile != NULL && pArrayListEmployee != NULL)
    {
        retorno=0;
        do{
            if(!flag)
            {
                fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",auxId,auxNombre,auxHoras,auxSueldo);
                flag=1;
            }
            fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n", auxId,auxNombre,auxHoras,auxSueldo);
            employees=Employee_newConParametros(auxId,auxNombre,auxHoras,auxSueldo);
            if(employees!=NULL)
            {
                ll_add(pArrayListEmployee,employees);
            }else
                {
                  printf("%s,%s,%s,%s\n", auxId,auxNombre,auxHoras,auxSueldo);
                  getchar();
                }
        }while(!feof(pFile));
    }
    return retorno;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.bin (modo binario).
 *
 * \param path FILE* puntero al archivo a leer
 * \param pArrayListEmployee LinkedList* puntero a linkedlist
 * \return int 0 todo bien -1 error al guardar
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{
    int retorno=-1;
    Employee* pEmpleado;
    if(pFile!=NULL && pArrayListEmployee!= NULL)
    {
        do{
            pEmpleado=Employee_new();
            fread(pEmpleado,sizeof(Employee),1,pFile);
            if(!Employee_validarEmpleado(pEmpleado))
            {
                ll_add(pArrayListEmployee,pEmpleado);
            }
            else
            {
                Employee_delete(pEmpleado);
            }
        }while(!feof(pFile));
        retorno=0;
    }
    return retorno;
}
