#include <iostream>
#include "Taller.cpp"
#include "Vehiculo.cpp"
#include "Coche.cpp"
#include "Moto.cpp"

using namespace std;

int main()
{
    int op1, op2, op3;
    Taller *PTaller = new Taller (2);
    Vehiculo *Pvehiculo;
     Vehiculo *list_de_vehi[2];

    cout << "~~~~~~~~ TALLER MODO AUTOMATICO ~~~~~~~~"<< endl;
    cout << "Precione 1 para comenzar o 0 para salir"<< endl <<endl;
    cin >> op1;
 if (op1 = 1)
 {
          Pvehiculo= new Moto ();
          cout << "BMW , 750 cc. ";
          PTaller -> meter(Pvehiculo);

          Pvehiculo = new Coche ();
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

   cout << "Precione 3 para continuar con el testeo o 0 para salir"<< endl <<endl;
    cin >> op3;

 if (op3 = 3)
 {
           list_de_vehi [0] = new Moto ("BMW ", 750);
           list_de_vehi [1] = new Coche ("Mercedes Benz ", 9041578);

           for (int i = 0; i < 2; i++)
           {
               list_de_vehi[i] -> arrancar();
               list_de_vehi [i] -> parar();
               list_de_vehi [i] -> repostar ();
           }
    cout << "TESTEO FINALIZADO." << endl;
 }
  else
{
    cout << "Proceso Finalizado"<< endl<< endl;
}

    return 0;
}
