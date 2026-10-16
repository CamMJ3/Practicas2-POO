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

        friend ostream& operator<<(ostream& ost, const Fraccion& fr);
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

ostream& operator<<(ostream& ost, const Fraccion& fr)
{
    ost << fr.numerador << " / " << fr.denominador;
    return ost;
}


/***********************************************************************/

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Fraccion fr1(1, 8);
    Fraccion fr2(7, 19);
    Fraccion fr3(3, 9);
    Fraccion fr4(1, 3);

    Fraccion suma = fr1 + fr2;
    cout << "La suma de " << fr1 << " + " << fr2 << " es : " << suma << endl;

    cout << "\nLas fracciones " << fr3 << " y " << fr4 << (fr3 == fr4 ? " SI " : " NO ") << "equivalentes\n";
}