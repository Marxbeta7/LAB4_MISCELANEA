#include <iostream>

//PAQUETES PARA ENTORNO C++

#include <math.h> 
using namespace std; 
using std::string; 


int main() {

cout<<"PROGRAMA PARA ENCONTRAR N-ÉSIMO NÚMERO PRIMO "<<endl;

//Defino la variable de l aposición néisma que busco 

int a=0;


  
cout<<"Escriba la posicón del número primo que desea encontrar: "<<endl;

cin>>a;


//Lista con a número de posiciones 
int l[a]; 

//Primer primo es 2 en la posicon 0

l[0]=2; 
int c =2;
int b=2;


  //función div para hallar pirmos 
while (c<=a) {     
  for (int i = 1; i<c; i++){
    if (b%l[i-1]==0){
      break; //Cuando div no es cero 
    }
    else if(i==(c-1)){
      l[i]=b;
      c++;
    }
  }
  b++;

  }  

cout<<"El número primo que desea encontrar es: "<<l[a-1]<<endl;

}