#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED
#include "Vehiculo.h"
#include <string>
/**********************************MOTO CLASS************************************/
class Moto : public Vehiculo
{
    private:
        int m_cilindrada = 750;
        string m_marca = "BMW" ;
    public:
        Moto();
        Moto(string marca, int cilindrada);
        virtual ~Moto();
        string getMarca();
        void setMarca(string mc);
        int getCC ();
        void setCC(int cc);
        void arrancar();
        void parar();
        void repostar();
};

#endif // MOTO_H_INCLUDED
