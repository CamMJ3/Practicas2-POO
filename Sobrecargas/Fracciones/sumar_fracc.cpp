#include <iostream>
#include <windows.h>

using namespace std;

/** 
 * @file 
 * @brief Se define la clase padre "Vehículo", y sus clases derivadas "Auto" y "Motocicleta", defininiendo
 * las declaraciones de funciones para estas utilizando, primero, funciones virtuales en la clase padre y
 * funciones sobrescritas en las clases derivadas.

/***********************************************************************/

class Fraccion
{
    private:
        int numerador;
        int denominador;
    public:
        Fraccion(int numerador, int denominador);

        Fraccion operator+(const Fraccion& o) const;
        bool operator==(const Fraccion& o) const;

        void ver_fraccion() const;
};

// ----- Código de las funciones.

Fraccion::Fraccion(int numerador, int denominador)
{
    if (denominador == 0)
    {
        throw "ERROR: El denominador no puede ser 0. Intente de nuevo.";
    }

    this->numerador = numerador;
    this->denominador = denominador;
}

Fraccion Fraccion::operator+(const Fraccion& o) const
{
    return Fraccion(numerador * o.denominador + o.numerador * denominador, denominador * o.denominador);
}

bool Fraccion::operator==(const Fraccion& o) const
{
    return numerador * o.denominador == o.numerador * denominador;
}

void Fraccion::ver_fraccion() const
{
    cout << numerador << " / " << denominador << endl;
}


/***********************************************************************/
