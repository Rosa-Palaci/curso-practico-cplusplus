#include <iostream>
using namespace std;

int main(){
    int Vidas = 3;
    cout << Vidas << endl;
    for(int i = 0; i < 3; i++){
        Vidas = Vidas -1;
        cout << Vidas << endl;
    }

    return 0;
}