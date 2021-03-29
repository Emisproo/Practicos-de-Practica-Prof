#include "Moto.h"
Moto :: Moto () {}//const

Moto :: Moto (string marca, int cilindrada)
{
  this -> m_marca = marca;
  this->  m_cilindrada = cilindrada;
}

Moto :: ~Moto ()
{
   delete this; //destructor
}
string Moto :: getMarca()
{
    return m_marca;
}
void Moto :: setMarca (string mc)
{
    m_marca = mc;
}
int Moto :: getCC ()
{
    return m_cilindrada;
}
void Moto :: setCC (int cc)
{
    m_cilindrada = cc;
}
void Moto :: arrancar ()
{
    cout << "La moto ha arrancado" << endl << endl;
}

void Moto :: parar ()
{
    cout << "La moto ha parado" << endl << endl;
}

void Moto :: repostar()
{
    cout << "Se ha llenado el tanque de combustible."<< endl << endl;
}

