#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED
#include <iostream>
using namespace std;

/**********************************VEHICULO PURE ABSTRACT CLASS************************************/
class Vehiculo
{
    public:
        Vehiculo ();
        virtual ~Vehiculo();
        virtual void arrancar() = 0;
        virtual void parar() = 0;
        virtual void repostar() = 0;
};


#endif // VEHICULO_H_INCLUDED
