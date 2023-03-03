#include<iostream>

#include"include/comun.h"
#include"include/jornalero.h"
#include"include/registro.h"


int main(){

    Registro *registro = new Registro(10);

    int opcion;
    do{
        std::cout << "Opcion: (0-salir) (1-Ingresar Empleado) (2-Calcular Liquidacion)"<< std::endl;
        std::cin >> opcion;
        switch(opcion){
            case 0:{
                break;
            }
            case 1:{
                std::string nombre;
                int tipo;
                std::cout << "Tipo: (1-Comun) (2-Jornalero)" << std::endl;
                std::cin >> tipo;
                Empleado *nuevoEmpleado;
                if(tipo == 1){
                    std::cout << "Set nombre: "<< std::endl;
                    std::cin >> nombre;
                    int sueldo;
                    std::cout << "Set sueldo: " << std::endl;
                    std::cin >> sueldo;
                    nuevoEmpleado = new Comun(nombre, sueldo);
                    registro->setEmpleado(nuevoEmpleado);
                }else if(tipo == 2){
                    std::cout << "Set nombre: "<< std::endl;
                    std::cin >> nombre;
                    int cantHoras;
                    float valHora;
                    std::cout << "Set valor hora: " << std::endl;
                    std::cin >> valHora;
                    std::cout << "Set cantidad horas: " << std::endl;
                    std::cin >> cantHoras;                        
                    nuevoEmpleado = new Jornalero(nombre, valHora, cantHoras);
                    registro->setEmpleado(nuevoEmpleado);
                }else{
                    std::cout << "Opcion invalida " << std::endl;
                }
                break;
            }
            case 2:{
                unsigned int index;
                std::cout << "Liquidacion del empelado numero: " << std::endl;
                std::cin >> index;
                if(registro->getIesimo(index) != NULL){
                    std::cout << "Liquidacion: " << registro->getIesimo(index)->darLiqui() << std::endl;
                }else{
                    std::cout << "No existe ese empleado " << std::endl; 
                }
            }
            default:{
                break;
            }
        }
    }while(opcion != 0);

    return 1;
}