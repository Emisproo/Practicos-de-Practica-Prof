#ifndef COCHE_H_INCLUDED
#define COCHE_H_INCLUDED
#include "Vehiculo.h"
#include <string>

/**********************************COCHE CLASS************************************/
class Coche : public Vehiculo
{
    private:
        int m_motor = 9041578;
        string m_marca = "Mercedes Benz";
    public:
        Coche();
        Coche(string marca, int motor);
        virtual ~Coche();
        string getMarca();
        void setMarca(string mc);
        int getMotor ();
        void setMotor(int mt);
        void arrancar();
        void parar();
        void repostar();
};

#endif // COCHE_H_INCLUDED
