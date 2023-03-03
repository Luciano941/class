#include<stdio.h>

#include"../include/empleado.h"

Empleado::Empleado(std::string nombre){
    this->nombre = nombre;
}

std::string Empleado::getNombre(){
    return this->nombre;
}

