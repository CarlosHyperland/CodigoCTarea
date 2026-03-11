#include <iostream>

using namespace std;// donde se encuntras todas las librerias estandar

int main (){
  /*
  //variables: es un espacio de memoria reservado para almacenar un valor que corresponde a un tipo de dato
  //cout<<"hola mundo..."<<endl;
  //tipo nombres de la variable.
  //c++ case-sensitive: Distincion entre mayusculas y minusculas.
  //Estilos de escritura de nombres de variables: Camel Case
  //Para las clases metodos y funciones LowerCamelCase y para las variables Snake Case
  //Restriccion el nomre de una variable no puede: Iniciar con un numeros, no puede tener caracteres especiales@, no espacio.


  string nombreCompleto = "Carlos Pilo";//lowerCamelCase
  string NombreCompleto = "Carlos Pilo2";//UpperCamelCase
  string nombre_completo = "Carlos Pilo3";//Snake_case



  cout<<nombreCompleto<<endl;
  cout<<NombreCompleto<<endl;
  cout<<nombre_completo<<endl;
 
 
  //Tipo de datos primitivos
  //Variables numericas
  //Numeros enteros
  //Como declarar una variable: Tipo-nombre de la variale-valor -;

  short entero_corto = 32768; //2 Bytes (-32,768 a 32,767)
  int entero = 214748364 ; //4 Bytes (-2,147,483,648 a 2,145,483,647)
  long entero_largo = 1214748364 ; //8 Bytes
  unsigned long long ientero_largo = 1844674407309551615 ; //10 Byte

  cout<<"short:"<<entero_corto<<endl;
  cout<<"entero:"<<entero<<endl;
  cout<<"entero_largo:"<<entero_largo<<endl;
  cout<<"ientero_largo:"<<ientero_largo<<endl;
  

  //Numeros reales de punto flotante
  
  float numero_dicimal = 100.235; // 4 byts

  cout<<"float:"<<numero_dicimal<<endl;
  

  //Numeros reales de punto flotante

  char cr = 'T'; cadena de cararcter en comilla simple
  char asc = 64;


  cout<<"char:" <<cr<<endl;
  cout<<"ascii:" <<asc<<endl;
  

  //Numeros reales de punto flotante

  //logicos 1 o 0, true o false

  bool logico = false;

  cout<<logico<<endl;
  

  char cadena [6] = "texto";
  string cadena_texto = "Hola soy Carlos";
  

  cout<<"string:"<<cadena_texto<<endl;
  */

  char saludo [4];
  saludo [0] = 'H';
  saludo [1] = 'O';
  saludo [2] = 'L';
  saludo [3] = 'A';

  cout<<"array:"<<saludo<<endl;
  cout<<"array:"<<saludo[0]<<saludo[1]<<saludo[2]<<saludo[3]<<endl;
  

  int codigo [3];
  codigo [0] = 1280;
  codigo [1] = 1280;
  codigo [2] = 1280;
  cout<<"codigos:"<<codigo[0]<<codigo[1]<<codigo[2]<<endl;

  string paises[3];
  paises[0] = "Guatemala";
  paises[1] = "Salvador";
  paises[2] = "Honduras";
  cout<<"paises:"<<paises[0]<<endl<<paises[1]<<endl<<paises[2]<<endl<<endl;

}
