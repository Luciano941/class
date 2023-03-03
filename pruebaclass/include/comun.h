#ifndef _COMUN_H
#define _COMUN_H

#include"empleado.h"

class Comun : public Empleado{
    private:
        int sueldo;
    public:
        Comun(std::string, int);
        int darLiqui();   
};

#endif