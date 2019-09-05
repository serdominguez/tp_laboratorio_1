#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Muestra en consola el menu de opciones del programa.
 * \param oper1 es el primer operando que se informara en la opcion 1.
 * \param oper2 es el segundo operando que se informara en la opcion 2.
 *
 */


void menu(int oper1, int oper2)
{
    system("cls");
    printf("-----------Programacion I - Laboratorio----------\n");
    printf("-------------------------------------------------\n");
    printf("--------------C A L C U L A D O R A--------------\n");
    printf("-------------------------------------------------\n");
    printf("--Sergio Dominguez------------Leg.:109290--------\n\n");
    printf("Opciones\n");
    printf("1.Ingresar 1er operando (el actual es: %d)\n",oper1);
    printf("2.Ingresar 2do operando (el actual es: %d)\n",oper2);
    printf("3.Calcular todas las operaciones\n");
    printf("4.Informar resultados\n");
    printf("5.Salir\n\n");
    //printf("Elija opcion: ");


}

/** \brief Realiza la operacion de suma.
 *
 * \param a es el primer operando.
 * \param b es el segundo operando.
 * \return el resultado de la suma.
 *
 */
int suma(int a, int b)
{
    int resultado;
    resultado = a+b;
    return resultado;

}


/** \brief Realiza la operacion resta
 *
 * \param a es el primer operando.
 * \param b es el segundo operando.
 * \return el resultado de la resta.
 *
 */
int resta (int a, int b)
{
    int resultado;
    resultado = a-b;
    return resultado;
}

/** \brief Realiza la operacion division.
 *
 * \param a es el primer operando.
 * \param b es el segundo operando. Solo entran numeros diferentes de cero
 * \return el resultado de la division como float.
 *
 */
float division (int a, int b)
{
    float resultado;
    resultado = ((float)a/b);
    return resultado;

}

/** \brief Realiza la operacion division.
 *
 * \param a es el primer operando.
 * \param b es el segundo operando.
 * \return el resultado de la multiplicacion.
 *
 */
int multiplicacion (int a, int b)
{
    int resultado;
    resultado = a*b;
    return resultado;

}

/** \brief Calcula recursivamente el factorial del numero ingresado
 *
 * \param a es el valor del operando ingresado
 * \return el valor del factorial del numero ingresado como long long.
 *
 */
long long factorial (int a) {

    long long resultado = 1;

    if (a>resultado) {
        resultado = a * factorial(a-1);

    }
    return resultado;

}

/** \brief Pide ingresar un numero, y lo valida
 *
 * \param  mensaje es el mensaje para solicitar dato
 * \param  mensajeError es el mensaje cuando la validacion falla
 * \param  oper1 Es puntero a variable de main para mostar dato ingresado
 * \param  oper2 Es puntero a variable de main para mostar dato
 * \param  max es el numero maximo aceptado
 * \param  min es el numero minimo aceptado
 * \return numero ingreado por el usuario ya validado
 *
 */

int getIntMaxMin(char* mensaje, char* mensajeError,int* oper1, int* oper2, int max, int min)
{
    int numero;

    menu(*oper1,*oper2);
    printf(mensaje);

    while ((scanf("%d",&numero)!=1) || (numero>max || numero<min))
    {
        fflush(stdin);
        menu(*oper1,*oper2);
        printf(mensajeError);
    }

    return numero;
}

/** \brief Pide ingresar un numero, y lo valida
 *
 * \param  mensaje es el mensaje para solicitar dato
 * \param  mensajeError es el mensaje cuando la validacion falla
 * \param  oper1 Es puntero a variable de main para mostar dato ingresado
 * \param  oper2 Es puntero a variable de main para mostar dato
 * \return numero ingreado por el usuario ya validado
 *
 */
int getInt(char* mensaje, char* mensajeError,int* oper1, int* oper2)
{
    int numero;

    menu(*oper1,*oper2);
    printf(mensaje);

    while (scanf("%d",&numero)!=1)
    {
        fflush(stdin);
        menu(*oper1,*oper2);
        printf(mensajeError);
    }

    return numero;
}
