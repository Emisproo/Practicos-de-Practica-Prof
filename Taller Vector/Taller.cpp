#include "Taller.h"
Taller :: Taller ()     //constructor del ob taller con 2 espacios de vehiculos
{
    cap_actual_vehiculos = 0;
    cap_max_vehiculos = 2;
}
Taller :: Taller(int variable)
{
  cap_actual_vehiculos = 0;
  cap_max_vehiculos = variable;
}

Taller::~Taller() //destructor
{

}

void Taller::meter(Vehiculo *Pvehiculo)
{
  Vect.push_back(Pvehiculo);

  cout << "Vehiculo ingresado"<< endl;
  //push_back mete dentro del vector a traves del puntero
  // reemplaza
  /*if (cap_actual_vehiculos == cap_max_vehiculos)
    {
        cout<< "Capacidad Maxima Ocupada "<< endl << endl;
    }
    else
    {
        list_de_vehi[cap_actual_vehiculos] = Pvehiculo;
        cap_actual_vehiculos++;
        cout << " Vehiculo ingresado" << endl;
    } */

}

void Taller::arreglarVehiculos()
{
    for (int i = 0; i < Vect.size(); i++)
    {
        Vect[i] -> arrancar ();
        Vect[i] -> parar ();
    }

    cout<< "REPARACION EXITOSA" << endl << endl;
}

void Taller :: cargarCombustible()
{
   for (int i = 0; i < Vect.size(); i++)
    {
        Vect[i] ->repostar ();

    }
}
