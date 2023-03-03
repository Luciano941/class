#include"../include/comun.h"

Comun::Comun(std::string nombre, int sueldo): Empleado(nombre){
    this->sueldo = sueldo;
}   

int Comun::darLiqui(){
    return this->sueldo;
}