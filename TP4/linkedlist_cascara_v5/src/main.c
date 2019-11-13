/*
    utest example : Unit test examples.
    Copyright (C) <2018>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../testing/inc/main_test.h"
#include "../inc/LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "utn.h"

void main_menu(int* option);

int main(void)
{
    startTesting(1);  // ll_newLinkedList
    startTesting(2);  // ll_len
    startTesting(3);  // getNode - test_getNode
    startTesting(4);  // addNode - test_addNode
    startTesting(5);  // ll_add
    startTesting(6);  // ll_get
    startTesting(7);  // ll_set
    startTesting(8);  // ll_remove
    startTesting(9);  // ll_clean
    startTesting(10); // ll_deleteLinkedList
    startTesting(11); // ll_indexOf
    startTesting(12); // ll_isEmpty
    startTesting(13); // ll_push   -----
    startTesting(14); // ll_pop
    startTesting(15); // ll_contains
    startTesting(16); // ll_containsAll
    startTesting(17); // ll_subList
    startTesting(18); // ll_clone
    startTesting(19); // ll_sort

/*
    int option;
    LinkedList* listaEmpleados;
    LinkedList* listFilter;
    int flagTxt=0;
    int flagBin=0;
    int flagAdd=0;
    do{
        system("cls");
        main_menu(&option);
        switch(option)
        {
            case 1:
                if(!flagTxt && !flagBin){
                    listaEmpleados = ll_newLinkedList();
                    controller_loadFromText("data.csv",listaEmpleados);
                    printf("\nDatos cargados satisfactoriamente");
                    getchar();
                    flagTxt=1;
                }else{
                    system("cls");
                    printf("Estos datos ya fueron ingresados");
                    getchar();
                }
                break;
            case 2:
                if(!flagTxt && !flagBin){
                    listaEmpleados = ll_newLinkedList();
                    controller_loadFromBinary("data.bin",listaEmpleados);
                    printf("\nDatos cargados satisfactoriamente");
                    getchar();
                    flagBin=1;
                }else{
                    system("cls");
                    printf("Estos datos ya fueron ingresados");
                    getchar();
                }
                break;
            case 3:
                if(controller_addEmployee(listaEmpleados)){
                    printf("Los datos ingresados son invalidos..");
                    getchar();
                }else
                    flagAdd=1;
                break;
            case 4:
                if(!flagBin && !flagTxt && !flagAdd){
                    system("cls");
                    printf("No hay datos cargados..");
                    getchar();
                }else if(!controller_editEmployee(listaEmpleados)){
                    printf("La modificacion se realizo con exito.");
                    getchar();
                }else{
                    printf("No pudo realizarse la modificacion intente nuevamente.");
                    getchar();
                }
                break;
            case 5:
                if(!flagBin && !flagTxt && !flagAdd){
                      system("cls");
                      printf("No hay datos cargados..");
                      getchar();
                }else if(!controller_removeEmployee(listaEmpleados)){
                    printf("La baja se realizo con exito.");
                    getchar();
                }else{
                    printf("No pudo realizarse la baja intente nuevamente.");
                    getchar();
                }
                break;
            case 6:
                if(flagBin || flagTxt || flagAdd){
                    controller_ListEmployee(listaEmpleados);
                }else{
                    system("cls");
                    printf("No hay datos cargados.");
                    getchar();
                }
                break;
            case 7:
                controller_sortEmployee(listaEmpleados);
                break;
            case 8:
                if(!flagBin && !flagTxt && !flagAdd){
                      system("cls");
                      printf("No hay datos cargados.");
                      getchar();
                }else if(!controller_saveAsText("data.csv",listaEmpleados)){
                    ll_deleteLinkedList(listaEmpleados);
                    flagTxt=0;
                    flagBin=0;
                    flagAdd=0;
                }else{
                    printf("Error al guardar.");
                    getchar();
                }
                break;
            case 9:
                if(!flagBin && !flagTxt && !flagAdd){
                      system("cls");
                      printf("No hay datos cargados..");
                      getchar();
                }else if(!controller_saveAsBinary("data.bin",listaEmpleados)){
                    ll_deleteLinkedList(listaEmpleados);
                    flagTxt=0;
                    flagBin=0;
                    flagAdd=0;
                }else{
                    printf("Error al guardar.");
                    getchar();
                }
                break;

            break;
        }
    }while(option != 10);
    return 0;
}
void main_menu(int* option){
    printf("\nMenu:\n\
1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).\n\
2. Cargar los datos de los empleados desde el archivo data.bin (modo binario).\n\
3. Alta de empleado\n\
4. Modificar datos de empleado\n\
5. Baja de empleado\n\
6. Listar empleados\n\
7. Ordenar empleados\n\
8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\n\
9. Guardar los datos de los empleados en el archivo data.bin (modo binario).\n\
10. Salir\n\
\n");
    utn_getEntero(option,3,"Ingrese una de las siguientes opciones: ","Ingrese una opion valida",1,12);*/
}

