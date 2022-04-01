#include <iostream>

//PAQUETES PARA ENTORNO C++

#include <math.h> 
using namespace std; 
using std::string; 


// PROGRAMA PARA ENCONTRAR MÁXIMOS Y MÍNIMOS EN UNA LISTA

int main() {

cout<<"PROGRAMA PARA ENCONTRAR MÁXIMOS Y MÍNIMOS EN UNA LISTA "<<endl;

 
 int a=0;
  
//SOLICITAR CANTIDAD DE NÚMEROS A COMPARAR

  cout<<"¿Cuántos número va a ingresar en la lista?  \n"<<endl;
  cin>>a;

//ASOCIAR A UNA LISTA LOS ELEMENTOS

  int list_max_min[a-1];

//UBICAR EN CADA POOSICIÓN LEMENTOS QUE INGRESA USUARIO

  for (int i=0;i<a;i++){
    cout<<"Ingrese uno de los números de su lista"<<endl;

    cin>>list_max_min[i]; 
  }

//USO VARIBALE TEMP PARA RRECORDAR QUE ES LA QUE VARIA 
  int temp=0;
  int temp_index=0;

//implemento for para buscar max comprando con 0 por default 

  for (int i=0;i<a;i++){
    if (i==0){ 
      temp=list_max_min[0];
      temp_index=i;
    }
    else if(list_max_min[i]>temp){ 
      temp=list_max_min[i];
      temp_index=i;
    }
    }
    cout<<"El maximo fue el numero "<<temp<<endl;
  
  temp=0;
  temp_index=0;

//MISMA LÓGICA PARA EL MÍNIMO 

  for (int i=0;i<a;i++){
    if (i==0){
      temp=list_max_min[0];
      temp_index=i;
    }
    else if(list_max_min[i]<temp){
      temp=list_max_min[i];
      temp_index=i;
    }
    }
  cout<<"El Minimo fue el numero "<<temp<<endl;
  
}