#include "Taller.h"
Taller :: Taller ()     //constructor del ob taller con 2 espacios de vehiculos
{
    cap_actual_vehiculos = 0;
    cap_max_vehiculos = 2;
}
Taller :: Taller(int variable)  // se establece q la capacidad m
{
  cap_actual_vehiculos = 0;
  cap_max_vehiculos = variable;
}

Taller::~Taller() //destructor
{
   delete list_de_vehi;
    //por cada componente vehiculo invocar al operador delete...
}

void Taller::meter(Vehiculo *Pvehiculo)
{
    if (cap_actual_vehiculos == cap_max_vehiculos)
    {
        cout<< "Capacidad Maxima Ocupada "<< endl << endl;

    }
    else
    {
        list_de_vehi[cap_actual_vehiculos] = Pvehiculo;
        cap_actual_vehiculos++;
        cout << " Vehiculo ingresado" << endl;
    }
    //lista_de_vehiculos.add(v);
}

void Taller::arreglarVehiculos()
{

    cout<< "REPARACION EXITOSA" << endl << endl;
}

