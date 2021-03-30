#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED
#include "Vehiculo.h"
#include <string>
/**********************************MOTO CLASS************************************/
class Moto : public Vehiculo
{
    private:
        int m_cilindrada;
        string m_marca;
    public:
        Moto(string marca, int cilindrada);
        virtual ~Moto();
        void arrancar();
        void parar();
        void repostar();
};

#endif // MOTO_H_INCLUDED
