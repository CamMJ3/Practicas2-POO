#include "Clases/Clases.h"
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

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
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // ------- Ejercicio 2.
    Auto bugatti("Bugatti", "Chiron Super Sport", 440, 100);
    Auto toyota("Toyota", "Corolla Sedan", 180, 50);
    Motocicleta kawasaki("Kawasaki", "Ninja H2R", 400, 4);
    Motocicleta honda("Honda", "CB190R", 120, 1);

    Vehiculo* vehiculos1[4] = {&bugatti, &toyota, &kawasaki, &honda};

    for (int i = 0; i < 4; i++)
    {
        vehiculos1[i]->mostrarInfo();
    };

    // ------- Ejercicio 5.
    Vehiculo tesla("Tesla", "Model S Plaid", 322);
    Auto porsche("Porsche", "GT3 RS", 296, 64);
    Motocicleta bmw("BMW", "S 1000 RR", 303, 4);

    vector<Vehiculo*> vehiculos2;

    vehiculos2.push_back(&tesla);
    vehiculos2.push_back(&porsche);
    vehiculos2.push_back(&bmw);

    for (vector<Vehiculo*>::iterator itera = vehiculos2.begin(); itera != vehiculos2.end(); ++itera)
    {
        (*itera)->mostrarInfo();
    }
}