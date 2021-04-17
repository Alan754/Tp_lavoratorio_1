#include <stdlib.h>
#include <stdio.h>
#include "alan.h"

//ECHO POR ALAN PERALTA DNI:42872124
//No lo puede pasar a eclipse ya que mi computadora no me dejo instalrlo, busque solucionarlo pero no pude



int main()
{
    int numero1=0;
    int numero2=0;
    int resultado;
    int restaResult;
    int multResult;
    int flagPrimero=0;
    int flagSegundo=0;
    int flagTercero=0;
    int flagFactorial=0;
    int flagFactorialDos=0;

    float factResult1;
    float factResult2;

    float divResult;

    char seguir='s';
    char salir;

    do
    {
        switch(menu(numero1,numero2))
        {
        case 1:
            if(flagPrimero==0)
            {
                printf("Ingrese primer operando (A=x): ");
                fflush(stdin);
                scanf("%d",&numero1);
                flagPrimero=1;
            }
            break;
        case 2:
            if(flagPrimero==1)
            {
                printf("Ingrese segundo operando (B=y): ");
                fflush(stdin);
                scanf("%d",&numero2);
                flagSegundo=1;
            }
            else
            {
                printf("Para poder ingresar el segundo operando debe ingresar el primero\n");
                system("pause");
            }
            break;
        case 3:
            if(flagPrimero==1 && flagSegundo==1)
            {
                resultado=suma(numero1,numero2);
                restaResult=resta(numero1,numero2);
                divResult=divicion(numero1,numero2);
                multResult=multiplicacion(numero1,numero2);

                if (numero1>=0)
                {
                    factResult1=factorialRecursiva(numero1);
                    flagFactorial=1;
                }
                if(numero2>=0)
                {
                    factResult2=facRecur(numero2);
                    flagFactorialDos=1;
                }
                flagTercero=1;
            }
            else
            {
                printf("No pueden realizar las siguientes operaciones sin ingresar operandos \n");
                system("pause");
            }
            break;
        case 4:
            if(flagTercero==1)
            {
                printf("El calculo de la suma ( %d + %d ) es: %d\n",numero1,numero2,resultado);
                printf("El calculo de la resta ( %d - %d ) es: %d\n",numero1,numero2,restaResult);

                if(numero1>0&&numero2>0)
                {
                    printf("El calculo de la division ( %d / %d) es: %.2f\n",numero1,numero2,divResult);
                }
                else
                {
                    printf("No es posible dividir por 0\n");
                }

                printf("El calculo de la multiplicacion ( %d * %d ) es: %d\n",numero1,numero2,multResult);

                if(flagFactorial==1)
                {
                    printf("El calculo el factorial (%d!) es: %.2f\n",numero1,factResult1);
                }
                else
                {
                    printf("No es posible factoriar numeros menores a 0\n");
                }
                if(flagFactorialDos==1)
                {
                    printf("El calculo el factorial (%d!) es: %.2f\n",numero2,factResult2);
                }
                else
                {
                    printf("No es posible factoriar numeros menores a 0\n");
                }

                system("pause");

                flagPrimero=0;
                flagSegundo=0;
                flagTercero=0;
                flagFactorial=0;
                flagFactorialDos=0;
            }
            else
            {
                printf("Debes realizar lo anterior para poder pedir resultados\n");
                system("pause");
            }
            break;
        case 5:
            printf("Desea salir ingrese s(si)/n(no)?: ");
            fflush(stdin);
            scanf("%c",&salir);
            if(salir=='s')
            {
                seguir='n';
                printf("\nGracias por usar calculadora virtual :)!!!!\n");
            }
            break;
        }
    }
    while(seguir=='s');
    return 0;
}
