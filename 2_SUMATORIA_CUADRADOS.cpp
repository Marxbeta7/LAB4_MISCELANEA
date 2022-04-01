
#include <iostream>

//PAQUETES PARA ENTORNO C++

#include <math.h> 
using namespace std; 
using std::string; 


// PROGRAMA PARA SUMATORIA DEL CUADRO DE ENTEROS

int main() {
  
//Defino Variables 
  int a;
  int b = 0;
  int c = 0;

  cout<<"SUMATORIA DEL CUADRO DE ENTEROS"<<endl;
  
  cout << "Ingrese la cantidad de números a los cuales se les hará la suma de sus cuadrados "<<endl; 
   cin>>a;

  for (int i=0;i<a;i++){
    cout<<"Ingrese número a sumar "<<endl; 
    
//Ejecuta y asigna valores a operar 

    cin>>c;
    b+=pow(c,2);//Se utiliza pow para elevar el número al cuadrado
  }

  cout<<"la suma de los cuadrados es: "<<b<<endl;
}