#include <iostream>
using namespace std;


int main() {
    int longitud = 0, espacios = 11, filas = 0, var1 = 0;
    string letras[7] = {"A", "B", "C", "D", "E", "F", "G"}; 
    
    while(longitud < 13){
        filas = 0;
        
        while(filas <= var1){
            cout<<letras[filas];
            filas++;
        }
        
        for(int i = 1; i <= espacios; i++){
            cout<<" ";
        }
  
       //Me da error cuando intento hacer lo mismo a este lado 
       cout<<letras[0]<<endl;
       longitud++;
       espacios = espacios - 2;
       var1++;
    }
    return 0;
}


