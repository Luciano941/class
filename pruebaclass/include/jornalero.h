#ifndef _JORNALERO_H_
#define _JORNALERO_H_

#include"empleado.h"

class Jornalero : public Empleado{
    private:
        float valHora;
        int cantHoras;
    public: 
        Jornalero(std::string, float, int);
        int getValhora();
        int getCantHoras();
        int darLiqui();
};

#endif