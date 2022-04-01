#include <iostream>

//PAQUETES PARA ENTORNO C++

#include <math.h> 
using namespace std; 
using std::string; 


// PROGRAMA CONVERSIÓN NUMERO ENTERO A BINARIO

int main() {
 

cout<<"PROGRAMA CONVERSIÓN NUMERO ENTERO A HEXADECIMAL"<<endl;

    int a;
    int b;
    
 //INFORMACIÓN BASE HEXADECIMAL
   
    char base[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    
//INFO NUEVO NUMERO CADENA CAR. VACÍA     
     string conv ="";


  
	  cout << "Inserte un numero entero positivo a convertir: ";
  //pedimos un numero para cambiarlo
	  cin>> a;
		while(a>0){
      b = a % 16;
      conv = base[b] + conv;
      a = a/16;
    }
 
    cout<<" El numero hexadecimal es : "<<conv<<endl;
  
}