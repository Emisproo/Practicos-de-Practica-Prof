#ifndef COCHE_H_INCLUDED
#define COCHE_H_INCLUDED
#include "Vehiculo.h"
#include <string>

/**********************************COCHE CLASS************************************/
class Coche : public Vehiculo
{
    private:
        int m_motor;
        string m_marca;
    public:
        Coche(string marca, int motor);
        virtual ~Coche();
        void arrancar();
        void parar();
        void repostar();
};

#endif // COCHE_H_INCLUDED
