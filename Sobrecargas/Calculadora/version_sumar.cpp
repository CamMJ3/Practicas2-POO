#include <iostream>

using namespace std;

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


/***********************************************************************/

int main()
{
    Calculadora calc;

    cout << "\nLa suma de dos enteros (4 y 17) es : " << calc.sumar(4, 17) << endl;
    cout << "La suma de tres enteros (20, 4 y 9) es : " << calc.sumar(20, 4, 9) << endl;
    cout << "La suma de dos decimales (2.8 y 10.3) es : " << calc.sumar(2.8, 10.3) << endl;
}