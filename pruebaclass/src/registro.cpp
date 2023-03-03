#include"../include/registro.h"

Registro::Registro(int tope){
    this->tope = 0;
}

int Registro::getCant(){
    return this->tope + 1;
}

void Registro::setEmpleado(Empleado *empleado){
    if(tope < MAX_EMPLEADOS){
       this->arr[this->tope] = empleado;
       this->tope++;
    }else{
        std::cout << "No hay espacio" << std::endl;
    }
}

Empleado *Registro::getIesimo(int i){
    return this->arr[i];
}

void Registro::liberar(){
    for(int i = 0; i < this->tope; i++){
        delete this->arr[i];
    }
}