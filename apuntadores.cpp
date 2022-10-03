#include <iostream>
using namespace std;

int main (){
    int direccion = 420;
    int* apuntadorADireccion;
    apuntadorADireccion = &direccion; //d ala direccion real de la variable

    cout<<apuntadorADireccion<<endl;

    return 0;
}