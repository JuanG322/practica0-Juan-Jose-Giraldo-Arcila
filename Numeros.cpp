#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int Numero, NumeroElevados = 0, i = 0;
    int NumeroSeparado[15];
    
    
    cout<<"Ingrese un numero: ";
    cin >> Numero;
    
    
    while(Numero>0){
        NumeroSeparado[i] = Numero%10;
        Numero = Numero/10;
        NumeroElevados = pow(NumeroSeparado[i], NumeroSeparado[i])+NumeroElevados;
    }
    cout<<"Resultado: "<<NumeroElevados;
    return 0;
}


