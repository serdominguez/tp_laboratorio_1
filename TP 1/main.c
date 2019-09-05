#include <stdio.h>
#include <stdlib.h>
#include "dominguez.h"

int main()
{
    int opcion = 0;
    int operando1 = 0;
    int operando2 = 0;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    long long factorial1;
    long long factorial2;
    int flagOpe1 = 0;
    int flagOpe2 = 0;
    int flagOperaciones = 0;

    while (opcion!=5)
    {
        opcion=getIntMaxMin("ingrese opcion: ", "ERROR. DEBE INGRESAR UN NUMERO ENTRE 1 Y 5\nIngrese opcion: ", &operando1,&operando2,5,1);

        while (opcion<1 || opcion>6)
        {

            opcion=getIntMaxMin("ERROR. DEBE INGRESAR UN NUMERO ENTRE 1 Y 5\nIngrese opcion: ", "ERROR. DEBE INGRESAR UN NUMERO ENTRE 1 Y 5\nIngrese opcion: ", &operando1,&operando2,5,1);

        }

        switch (opcion)
        {
        case 1:

            operando1 = getInt("Ingrese primer operando: ", "ERROR. DEBE INGRESAR UN NUMERO\nIngrese primer operando: ",&operando1,&operando2);
            flagOpe1 = 1;
            break;
        case 2:
            operando2 = getInt("Ingrese segundo operando: ", "ERROR. DEBE INGRESAR UN NUMERO\nIngrese segundo operando: ",&operando1,&operando2);
            flagOpe2 = 1;
            break;


        case 3:
            if (flagOpe1==0)
            {
                printf("Usted no ingreso el primer operando\n");
                system("pause");
                opcion = 0;
                break;
            }
            if (flagOpe2==0)
            {
                printf("Usted no ingreso el segundo operando\n");
                system("pause");
                opcion = 0;
                break;
            }
            resultadoSuma = suma(operando1,operando2);
            resultadoResta = resta(operando1,operando2);
            if (operando2==0)
            {
                printf("No se puede dividir por cero\n");
                system("pause");
            }
            else
            {
                resultadoDivision = division(operando1,operando2);
            }
            resultadoMultiplicacion = multiplicacion(operando1,operando2);
            factorial1 = factorial(operando1);
            factorial2 = factorial(operando2);
            flagOperaciones = 1;
            break;

        case 4:
            if (flagOpe1==0)
            {
                printf("Usted no ingreso el primer operando\n");
                system("pause");
                opcion = 0;
                break;
            }
            else if (flagOpe2==0)
            {
                printf("Usted no ingreso el segundo operando\n");
                system("pause");
                opcion = 0;
                break;
            }
            else if (flagOperaciones==0)
            {
                printf("Usted solo cargo los operandos.\nDebe elegir la opcion 3 para realizar las operaciones.\n\n");
                system("pause");
                opcion = 0;
                break;

            }

            printf("\nEl resultado de %d+%d es %d",operando1,operando2,resultadoSuma);

            printf("\nEl resultado de %d-%d es %d",operando1,operando2,resultadoResta);

            if (operando2==0)
            {
                printf("\nNO ES POSIBLE DIVIDIR POR CERO");
            }
            else
            {
                printf("\nEl resultado de %d/%d es %.2f",operando1,operando2,resultadoDivision);
            }

            printf("\nEl resultado de %d*%d es %d",operando1,operando2,resultadoMultiplicacion);

            printf("\nEl factorial de %d es: %lld y el factorial de %d es: %lld",operando1,factorial1,operando2,factorial2);

            printf("\n");

            system("pause");

        }

    }

    return 0;
}


