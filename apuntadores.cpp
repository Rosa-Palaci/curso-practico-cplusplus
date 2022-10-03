#include <iostream>
using namespace std;

int main (){
    int direccion = 420;
    int segundaDireccion = 1234;
    int* apuntadorADireccion;
    apuntadorADireccion = &direccion; //da la direccion real de la variable
    *apuntadorADireccion = 3;

    apuntadorADireccion = &segundaDireccion; 

    cout<<*apuntadorADireccion<<endl;

    return 0;
}