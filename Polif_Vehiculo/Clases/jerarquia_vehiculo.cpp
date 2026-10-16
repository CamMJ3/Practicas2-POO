#include "Clases.h"
#include <iostream>
#include <string>

using namespace std;

// EJERCICIO 1.

/***********************************************************************/

Vehiculo::Vehiculo(string marca, string modelo, int velocidadMax)
{
    this->marca = marca;
    this->modelo = modelo;
    this->velocidadMax = velocidadMax;
}

void Vehiculo::mostrarInfo() const
{
    cout << "\n-------> INFORMACIÓN DEL VEHÍCULO \n";
    cout << "Marca : " << marca << endl;
    cout << "Modelo : " << modelo << endl;
    cout << "Velocidad máxima : " << velocidadMax << " km/h\n";
}

/***********************************************************************/

Auto::Auto(string marca, string modelo, int velocidadMax, int tanque_capacidad) : Vehiculo(marca, modelo, velocidadMax)
{
    this->tanque_capacidad = tanque_capacidad;
}

void Auto::mostrarInfo() const
{
    cout << "\n-------> INFORMACIÓN DEL AUTO \n";
    cout << "Marca : " << marca << endl;
    cout << "Modelo : " << modelo << endl;
    cout << "Velocidad máxima : " << velocidadMax << " km/h\n";
    cout << "Capacidad del tanque : " << tanque_capacidad << " litros\n";
}

/***********************************************************************/

Motocicleta::Motocicleta(string marca, string modelo, int velocidadMax, int cilindros) : Vehiculo(marca, modelo, velocidadMax)
{
    this->cilindros = cilindros;
}

void Motocicleta::mostrarInfo() const
{
    cout << "\n-------> INFORMACIÓN DE LA MOTOCICLETA \n";
    cout << "Marca : " << marca << endl;
    cout << "Modelo : " << modelo << endl;
    cout << "Velocidad máxima : " << velocidadMax << " km/h\n";
    cout << "Número de cilindros : " << cilindros << endl;
}