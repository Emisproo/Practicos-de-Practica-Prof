#include "Coche.h"

Coche :: Coche(){} //costr

Coche :: Coche(string marca, int motor)
{
   this-> m_marca = marca;
   this -> m_motor = motor;
}

Coche :: ~Coche()
{
    delete this; //destructor
}

string Coche :: getMarca()
{
    return m_marca;
}

void Coche :: setMarca (string mc)
{
    m_marca = mc;
}
int Coche :: getMotor ()
{
    return m_motor;
}
void Coche :: setMotor (int mt)
{
    m_motor = mt;
}
void Coche :: arrancar()
{
    cout<< "El coche ha arrancado"<< endl << endl;
}

void Coche :: parar ()
{
    cout << " El coche ha parado" << endl << endl;
}

void Coche :: repostar()
{
    cout << "Se ha llenado el tanque de combustible" << endl<< endl;
}

