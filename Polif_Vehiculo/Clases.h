#pragma once
#include <iostream>
#include <string>

/** 
 * @file 
 * @brief Se define la clase padre "Vehículo", y sus clases derivadas "Auto" y "Motocicleta", defininiendo
 * las declaraciones de funciones para estas utilizando, primero, funciones virtuales en la clase padre y
 * funciones sobrescritas en las clases derivadas.

/***********************************************************************/

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

/***********************************************************************/

class Auto : public Vehiculo
{
    private:
       int tanque_capacidad; 
    public:
        Auto(string marca, string modelo, int velocidadMax, int tanque_capacidad); // Constructor de la sub-clase Auto.
        void mostrarInfo() const override; // Método sobrescrito que permite visualizar la información del auto.
};

/***********************************************************************/

class Motocicleta : public Vehiculo
{
    private:
       int cilindros; 
    public:
        Motocicleta(string marca, string modelo, int velocidadMax, int cilindros); // Constructor de la sub-clase Motocicleta.
        void mostrarInfo() const override; // Método sobrescrito que permite visualizar la información de la motocicleta.
};