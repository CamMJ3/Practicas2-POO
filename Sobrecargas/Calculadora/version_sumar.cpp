#include <iostream>
#include <windows.h>

/** 
 * @file 
 * @brief Se define la clase Fraccion al igual que sus declaraciones de funciones y el
 * código pertinente. En este caso, se define su construct
 * 

/***********************************************************************/

class Calculadora
{
    public:
        int sumar(int num1, int num2); // Versión de la función sumar que suma dos números.
        int sumar(int num1, int num2, int num3); // Versión de la función sumar que suma tres números.
        double sumar(double num1, double num2); // Versión de la función sumar que suma dos decimales.
};

// ----- Código de las funciones.

int Calculadora::sumar(int num1, int num2)
{
    return num1 + num2;
}

int Calculadora::sumar(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

double Calculadora::sumar(double num1, double num2)
{
    return num1 + num2;
}