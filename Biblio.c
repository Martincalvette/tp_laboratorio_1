#include <stdio.h>
#include <stdlib.h>
#include "firma.h"

float sumar(float numeroA, float numeroB)
{
    return numeroA+numeroB;
}


float restar(float numeroA, float numeroB)
{
    return numeroA-numeroB;
}

float multiplicar(float numeroA, float numeroB)
{
    return numeroA*numeroB;
}

float dividir(float numeroA, float numeroB)
{
    float resultado=0;
    if (numeroB==0)
    {
        printf("\nNo se puede dividir por 0");
    }
    else
    {
        resultado=numeroA/numeroB;
    }

    return resultado;
}

int factorializa(float numero)
{
    if (numero=1)
        {
            return 1;
        }else
        {
            return numero* factorializa(numero-1);
        }
}
