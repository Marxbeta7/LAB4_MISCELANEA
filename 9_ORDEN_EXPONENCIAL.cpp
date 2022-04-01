#include <iostream>

//PAQUETES PARA ENTORNO C++

#include <math.h> 
using namespace std; 
using std::string; 



//.............................................................................................................//

//ESTA SECCIÓN DEL CÓDIGO SE REALIZÓ SIGUIENDO LA LÓGICA DEL IMPLEMENTADO EN CLASE CON EL PROFESOR PREVIAMENTE

//.............................................................................................................//

//FUNCIÓN PARA EL EXPONENCIAL 

double exp(int x, int n ){
  
  double y = 0.;
  int f = 1;
    
  for(int i = 0; i<n;i++){
    if (i==0){
      y+=pow(x,i)/f;
    }
    else{
      f=f*i;
      y+=pow(x,i)/f ;
    }
  }
  
    return y;
} 


int main() {
    

cout<<"PROGRAMA PARA ENCONTRAR APROXIMACIÓN A UN ORDEN N DE e^x "<<endl;



int n = 0;
int x = 0;

  cout<<"INGRESE EL ORDEN DE MAGNITUD  QUE DESEA TENER:"<<endl;
  cin>>n;

  cout<<"ingrese el valor de x "<<endl;
  cin>>x;
  double aprox = exp(x,n); 
  cout<<"El valor aproximado es "<<aprox<<endl;


  
  return 0;
}