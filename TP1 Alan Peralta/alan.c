#include "alan.h"
#include <stdlib.h>
#include <stdio.h>

//ECHO POR ALAN PERALTA DNI:42872124

float factorialRecursiva(int num1)
{
    float factorial = 1;
    if( num1==0 || num1==1 )
    {
        factorial = 1;
    }
    else
    {
        factorial = num1 * factorialRecursiva(num1 - 1);
    }
    return factorial;
}

float facRecur(int num2)
{
    float factorial = 1;
    if( num2==0 || num2==1 )
    {
        factorial = 1;
    }
    else
    {
        factorial = num2 * factorialRecursiva(num2 - 1);
    }
    return factorial;
}

int multiplicacion(int num1, int num2)
{
    int resultado;
    resultado=num1*num2;
    return resultado;
}

float divicion(int num1, int num2)
{
    float resultado;
    if(num1>=1 || num2>=1)
    {
        resultado=(float)num1/num2;
    }
    else
    {
        printf("No se puede dividir por 0");
    }
    return resultado;
}

int resta(int num1, int num2)
{
    int resultado;
    resultado=num1-num2;
    return resultado;
}

int suma(int num1, int num2)
{
    int resultado;
    resultado=num1+num2;
    return resultado;
}

int menu(numero1,numero2)
{
    system("cls");
    int opcion;
    printf("        Bienvenido a calculadora    \n\n");

    printf("        ****Menu de opciones****     \n\n");

    printf("      Ingrese Las siguientes opciones     \n\n");

    printf("1. Ingrese primer operando (A=%d)\n",numero1);
    printf("2. Ingrese segundo operando (B=%d)\n",numero2);

    printf("3. Calcula todas las operaciones:\n");
    printf("     a) Calcular la suma (A+B)\n");
    printf("     b) Calcular la resta (A-B)\n");
    printf("     c) Calcular la division (A/B)\n");
    printf("     d) Calcular la multiplicacion (A*B)\n");
    printf("     e) Calcular el factorial (A!)\n");

    printf("4. Informar resultados\n");
    printf("   a)El resultado de A+B es: r\n");
    printf("   b)El resultado de A-B es: r\n");
    printf("   c)El resultado de A/B es: r o No es posible dividir por cero\n");
    printf("   d)El resultado de A*B es: r\n");
    printf("   e)El factorial de A es: r1 y El factorial de B es: r2\n");

    printf("5. Salir\n");

    printf("Por favor seleccione una opcion: ");
    fflush(stdin);
    scanf("%d",&opcion);
    while(opcion <= 1 && opcion >= 5)
    {
        printf("Opcion erronia, por favor Reingrse opcion: ");
        scanf("%d",&opcion);
        system("pause");
    }
    return opcion;
}



