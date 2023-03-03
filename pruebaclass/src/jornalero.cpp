#include"../include/jornalero.h"

Jornalero::Jornalero(std::string nombre, float val, int cant) : Empleado(nombre){
    this->valHora = val;
    this->cantHoras = cant;
}

int Jornalero::getValhora(){
    return this->valHora;
}

int Jornalero::getCantHoras(){
    return this->cantHoras;
}

int Jornalero::darLiqui(){
    return this->valHora*this->cantHoras;
}