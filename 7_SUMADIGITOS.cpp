#include <iostream>

//PAQUETES PARA ENTORNO C++

#include <math.h> 
using namespace std; 
using std::string; 


// PROGRAMA PARA SUMAR LOS DIGITOS DE UN ENTERO

int main() {

cout<<"PROGRAMA PARA ENCONTRAR SUMA DE LOS DÍGITOS DE UN NÚMERO ENTERO "<<endl;

//DEFINO VARIABLES 
    //Varable que ingresa el usuario
    int numero = 0;
    //Variable para digigitos
    int ab= 0;
    //Suma de digitos
   int sd = 0;
    
    cout<< "Ingrese su numero entero: ";
    cin >> numero;

    //USA RESIDUO PARA SABER CUANTO VALE CADA DIGITOY SUMARLO
    while(numero != 0) {
        ab = numero % 10;
        numero /= 10;
        sd += ab;
    }
    cout << "La suma de los digitios de su numero es:" << sd << endl;
}