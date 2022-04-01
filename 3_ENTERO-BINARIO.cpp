#include <iostream>

//PAQUETES PARA ENTORNO C++

#include <math.h> 
using namespace std; 
using std::string; 


// PROGRAMA CONVERSIÓN NUMERO ENTERO A BINARIO

int main() {
 

cout<<"PROGRAMA CONVERSIÓN NUMERO ENTERO A BINARIO"<<endl;

  int a;
  
  //Definimos el binario como una cadena de caracteres vacía 
  
  string binario="";
  
cout<< "Ingresar número entero postivo"<<endl;

//Definimos valor A
cin>> a;
  
  //CONDICIONES CAMBIO: 
  
 // contador para deifniri si valor es 1 o 0
  
  if (a>0){
    while (a>0){
      if (a%2==0){
        binario="0"+binario;
      } else {
        binario="1"+binario;
      }
      a=(int) a/2;
    }
   
  }else if (a==0) {
    binario="0";
  
  //Si no se cumple la condición para el contador la respuesta es 0 
  
  }
  cout<<"El resultado del numero ingresado como binario es: " <<binario<<endl;
  
}