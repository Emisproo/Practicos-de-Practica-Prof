#include "Coche.h"

Coche :: Coche(string marca, int motor)
{
    m_marca = marca;
    m_motor = motor;
}

Coche :: ~Coche()
{
     //destructor
}

void Coche :: arrancar()
{
    cout<< "El coche " << m_marca << m_motor<<" ha arrancado"<< endl << endl;
}

void Coche :: parar ()
{
    cout << " El coche ha parado " << m_marca << m_motor << endl << endl;
}

void Coche :: repostar()
{
    cout << "Se ha llenado el tanque de combustible del coche "<< m_marca << m_motor<<  endl<< endl;
}

