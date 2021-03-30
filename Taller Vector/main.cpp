#include <iostream>
#include "Taller.cpp"
#include "Vehiculo.cpp"
#include "Coche.cpp"
#include "Moto.cpp"
#include <vector>
using namespace std;

int main()
{
    int op1, op2, op3;
    Taller *PTaller = new Taller (2);
    Vehiculo *Pvehiculo;
    vector<Vehiculo*> Vect;

    cout << "~~~~~~~~ TALLER MODO AUTOMATICO ~~~~~~~~"<< endl;
    cout << "Precione 1 para comenzar o 0 para salir"<< endl <<endl;
    cin >> op1;
 if (op1 = 1)
 {
          Pvehiculo= new Moto ("BMW", 750);
          cout << "BMW , 750 cc. " ;
          PTaller -> meter(Pvehiculo);

          Pvehiculo = new Coche ( "Mercedes Benz",9041578);
          cout << "Mercedes Benz. N° motor: 9041578 ";
          PTaller -> meter (Pvehiculo);
    cout<< endl<< endl;
 }
 else
{
    cout << "Proceso Finalizado"<< endl<< endl;
}

   cout << "Precione 2 para continuar con la reparacion o 0 para salir"<< endl <<endl;
    cin >> op2;

if (op2 = 2)
{
           PTaller -> arreglarVehiculos ();
}
 else
{
    cout << "Proceso Finalizado"<< endl<< endl;
}

   cout << "Precione 3 para repostar o 0 para salir"<< endl <<endl;
    cin >> op3;

 if (op3 = 3)
 {

    PTaller ->cargarCombustible();
    cout << "Proceso Finalizado"<< endl<< endl;
 }
  else
{
    cout << "Proceso Finalizado"<< endl<< endl;
}

delete PTaller;
delete Pvehiculo;
    return 0;
}
