#include <iostream>
#include <string>
using namespace std;

// Á, É, Í, Ó, Ú y á, é, í, ó, ú

// PROBLEMA 2 y 5.

/** 
 * @file 
 * @brief Se define la clase padre "Vehículo", y sus clases derivadas "Auto" y "Motocicleta", defininiendo
 * las declaraciones de funciones para esta utilizando, primero, funciones virtuales en la clase padre y
 * funciones sobrescritas en las clases derivadas.

/***********************************************************************/

int main()
{
    // --- Ejercicio 2.
    Vehiculo arr[4] = { Auto("Bugatti", "Chiron Super Sport", 440, 100),
                        Auto("Toyota", "Corolla Sedan", 180, 50),
                        Motocicleta("Kawasaki", "Ninja H2R", 400, 4),
                        Motociclera("Honda", "CB190R", 120, 1)
                    };

    // --- Ejercicio 5.
}