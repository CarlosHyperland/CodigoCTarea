#include <iostream>
using namespace std;

//int main() {

//metodo y funciones = ejecutan una porcion de codigo N cantidad de veces segun se llamar
//metodo = no retorna un tipo de dato
//funcion retorna un tipo de datos determinado

//80 lineas de codigo en 10 lugares distintos = 600 lineas de codigo
//crean una funcsion o un metodo = y lo manda a llamar 10 veces = 80 lineas de codigo y 10 llamados a funciones

//ejemplo funcion que sume dos valores

/*int suma2(int num1,int num2){
  int resultado = 0;
  resultado = num1+num2;
  return resultado;
}


int suma(int num1,int num2,int num3){
  int resultado = 0;
  resultado = num1+num2+num3;
  return resultado;
}*/

//VOID-----------------------------------------


int suma(int num1,int num2,int num3){
  int resultado = 0;
  resultado = num1+num2+num3;
  return resultado;
}
//metodo y envio de paramentros por referencia
void suma(int &num1,int &num2){
  int resultado = 0;
  num1+=1; //11
  num2+=1; //21
  resultado = num1+num2;//32
  cout<<resultado<<endl;
}


//cout<<"Todo correcto"<<endl;
int main(){
	int a =10,b=20;
  	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;


return 0;
}
