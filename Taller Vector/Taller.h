#ifndef TALLER_H_INCLUDED
#define TALLER_H_INCLUDED
#include "Vehiculo.h"
#include <iostream>
#include <vector>
using namespace std;

/**********************************TALLER CLASS************************************/
class Taller
{
    private:
        int cap_max_vehiculos;
        int cap_actual_vehiculos;
      vector < Vehiculo*> Vect; //puntero del array, ahora vector tipo vehiculo


    public:
        Taller ();
        Taller(int variable );
        virtual ~Taller();
        void meter(Vehiculo *Pvehiculo);
        void arreglarVehiculos();
        void cargarCombustible();
};


#endif // TALLER_H_INCLUDED
