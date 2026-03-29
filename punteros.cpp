#include <iostream>
using namespace std;

int main(){

  int edad=25,*p_edad;//El * toma el contenido de su operado como una direccion y muestra en esa direccion.
  p_edad = &edad;//El & el cual devuelve como resultado la direccion de su operado. 

  cout<<" Variable Edad :"<<edad<<endl;	
  cout<<"Puntero Edad :"<<*p_edad<<endl;// utilizar * cuando quiero que muestre el contenido del espacio.
  cout<<"Puntero Edad :"<<&p_edad<<endl;// Utilizar & cuando quiero que muestre la direccion del espacio.

  cout<<"------------------Cambiar valores----------"<<endl;

  *p_edad = 40;
  cout<<"Variable Edad :"<<edad<<endl;
  cout<<"Puntero Edad:"<<*p_edad<<endl;
  
  cout<<"-------------Otra Variable a p_edad valores"<<endl;
  
  int edad2 = 100;
  p_edad = &edad2;//Asignamos con &edad2 a un nuevo espacio.

  cout<<"Variable Edad :"<<edad<<endl;
  cout<<"Puntero Edad"<<*p_edad<<endl;//mostramos con * el contenido del espacio.
  cout<<"Puntero Edad direccion de espacio :"<<&edad2<<endl;//mostramos con & la direccio de edad2.

 cout<<"todo bien"<<endl;
return 0;
}
