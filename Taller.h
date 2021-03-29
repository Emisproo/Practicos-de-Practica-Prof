#ifndef TALLER_H_INCLUDED
#define TALLER_H_INCLUDED
#include "Vehiculo.h"
#include <iostream>
using namespace std;

/**********************************TALLER CLASS************************************/
class Taller
{
    private:
        int cap_max_vehiculos;
        int cap_actual_vehiculos;
       Vehiculo *list_de_vehi[2]; //puntero del array


    public:
        Taller ();
        Taller(int variable );
        virtual ~Taller();
        void meter(Vehiculo *Pvehiculo);
        void arreglarVehiculos();
};


#endif // TALLER_H_INCLUDED
