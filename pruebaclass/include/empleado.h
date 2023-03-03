#ifndef _EMPLEADO_H_
#define _EMPLEADO_H_

#include<iostream>

class Empleado{
    private:
        std::string nombre;
    public:
        Empleado(std::string);
        std::string getNombre();
        virtual int darLiqui() = 0;
};

#endif

