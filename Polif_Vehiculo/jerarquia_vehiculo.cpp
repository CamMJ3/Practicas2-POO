#include <iostream>
#include <string>
using namespace std;

// Á, É, Í, Ó, Ú y á, é, í, ó,

/** 
 * @file 
 * @brief a

/***********************************************************************/

/** 
 * @brief a
 * @details a
 */

class Vehiculo 
{
    protected:
        string marca;
        string modelo;
        int velocidadMax;
    public:
        Vehiculo(string marca, string modelo, int VelocidadMax); // Constructor de la clase Vehículo.

        virtual void mostrarInfo() const; // Permite visualizar la información del vehículo.
        virtual ~Vehiculo() = default; // Destructor por defecto de Vehículo.
};

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
    cout << "Modelo : " << marca << endl;
    cout << "Velocidad máxima : " << marca << endl;
}

/***********************************************************************/

class Auto : public Vehiculo
{
    private:
       int tanque_capacidad; 
    public:
        Auto(string marca, string modelo, string velocidadMax, int tanque_capacidad); // Constructor de la sub-clase Auto.
        void mostrarInfo() const override; // Método sobrescrito que permite visualizar la información del vehículo.
};

/***********************************************************************/

class Motocicleta : public Vehiculo
{
    private:
       int cilindros; 
    public:
        Motocicleta(string marca, string modelo, string velocidadMax, int cilindros); // Constructor de la sub-clase Auto.
        void mostrarInfo() const override; // Método sobrescrito que permite visualizar la información del vehículo.
};