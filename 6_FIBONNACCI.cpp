#include <iostream>

//PAQUETES PARA ENTORNO C++

#include <math.h> 
using namespace std; 
using std::string; 


// PROGRAMA PARA ENCONTRAR MÁXIMOS Y MÍNIMOS EN UNA LISTA

int main() {

cout<<"PROGRAMA PARA ENCONTRAR NESIMO TERMINO DE LA SUCESION DE FIBONNACCI "<<endl;

 
//DEFINO VARIBALES DE LA SUCESIÓN DE FIBONACCI

  int fib0 = 0;
  int fib1 = 1;
//POSICIÓN DE LA SUCESIÓN
  int a = 0;
//CONTADOR EN CERO 
  int i = 0;

//Usuario ingresa Valor a calcular de la sucesión 
  cout << "Ingrese la cantidad de términos de la sucesion fibonacci que desea ver: \n"; 
  cin >> a;
  
//CONDICION INICIAL   
  if(a > 0) {
    //DEFINO EL RECORRIDO
    for(i = 1; i <= a; i++) { 
        //pos inicial 
      cout << fib0 << " "; 
      //fUNCIÓN FIBONACCI
      fib1 += fib0; 
      //Variable buscada
      fib0 = fib1 - fib0; 
      
        
    }
    
    cout << "ESTA ES LA SUCESIÓN DE FIBONNACCI"<< "\n";
//NO CUMPLE CONDICION INICIAL 
  } else { 
    cout << "Seleccione un número positivo diferente de cero" << endl;
  }
  
  
}