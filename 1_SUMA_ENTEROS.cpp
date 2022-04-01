#include <iostream>

//PAQUETES PARA ENTORNO C++

#include <math.h> 
using namespace std; 
using std::string; 


// PROGRAMA PARA SUMAR NÚMEROS - ENTEROS

int main() {
  
//Defino Variables 

  int a; // Cantidad de enteros 
  int b = 0;
  
// temp variable que se usa en más de un momento

  int temp = 0;

//Defino Nombre del Programa 
  cout<<"PROGRAMA PARA SUMAR NÚMERO ENTEROS \n"<<endl;
  
//Solicito cantidad de números a sumar   

  cout << "¿Cuántos números enteros va a sumar? \n"; 
  
 //Respuesta en consola 
  cin>>a;
  
  
//Contador para número de veces que aparece el mensaje

  for (int i=0;i<a;i++){
    cout<<"Ingrese número a sumar "<<endl; 
    
//ASIGNAR NUEVOS VALORES    
    cin>>temp;
    b+=temp;
  }

  cout<<"El resultado de la suma es "<<b<<endl;
}