#include "Moto.h"
//const
Moto :: Moto (string marca, int cilindrada)
{
   m_marca = marca;
   m_cilindrada = cilindrada;
}

Moto :: ~Moto ()
{
    //destructor
}

void Moto :: arrancar ()
{

    cout << "La moto " << m_marca<< " cc "<< m_cilindrada<< " ha arrancado" << endl << endl;
}

void Moto :: parar ()
{
    cout << "La moto" << m_marca<< " cc "<< m_cilindrada<<" ha parado" << endl << endl;
}

void Moto :: repostar()
{
    cout << "Se ha llenado el tanque de combustible de la moto " << m_marca<< " cc "<< m_cilindrada<< endl << endl;
}

