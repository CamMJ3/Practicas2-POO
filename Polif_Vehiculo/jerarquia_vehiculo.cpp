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

        virtual void mostrarInfo(); // Permite visualizar la información del vehículo.
        virtual ~Vehiculo() = default; // Destructor por defecto de Vehículo.
};