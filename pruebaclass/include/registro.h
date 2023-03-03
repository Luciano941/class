#ifndef _REGISTRO_H_
#define _REGISTRO_H_

#include"empleado.h"

const int MAX_EMPLEADOS = 1000;

class Registro{
    private:
        Empleado *arr[MAX_EMPLEADOS];
        int tope;
    public:
        Registro(int);
        int getCant();
        void setEmpleado(Empleado *);
        Empleado *getIesimo(int);
        void liberar();
};

#endif