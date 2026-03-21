#include <iostream>
using namespace std;

int main (){

	
	string semana [7]={"Lunes","Martes","Mircoles","jueves","Viernes","Sabado","Domingo"};
	  semana [3] = "Jueves";
	  for (int i=0;i<7;i++){
	    cout<<semana[i]<<endl;
	}












	/*string nombre; //areglo de caracter
	int dato;
	cout<<"ingrese dato:";
	cin>>dato;
	cin.ignore();//siempre se utilizar para ingresar dato de nuevo
	cout<<"Ingrese nombre completo:";
	//cin>>nombre;
	getline(cin,nombre);
	cout<<nombre<<","<<dato<<endl;


	
	char nombre[30]; //areglo de caracter

	cout<<"Ingrese nombre completo:";
	//cin>>nombre;
	cin.get(nombre,30);
	cout<<nombre<<endl;



	int tam =0, suma=0, promedio=0;
	int notas[100];
	char res;
	do{
	    tam++;
	    cout<<"Ingrese nota "<<tam<<":";
	    cin>>notas[tam-1];
	    cout<<"Desea ingresar otras notas(s/n):";
	    cin>>res;
	}while(res=='s'||res=='S');
	
	  for (int i=0;i<tam;i++){
	    suma += notas[i];
	  }
	promedio = suma / tam;
	cout<<"El promedio es:"<<promedio<<endl;





	int tam=0, suma=0, promedio=0;
 
	cout<<"Cuantos notas desea ingresar:";
	cin>>tam;
	int notas [tam];// notas[4]
	  for (int i=0;i<tam;i++){	
	    cout<<"Ingrese Nota"<<i+1<<":";
	    cin>>notas[i];
	    
	  }

	  for (int i=0;i<tam;i++){
	    suma += notas[i]; // suma = suma + notas[i]

	  }

	    promedio = suma / tam;
	    cout<<"El promedio es:"<<promedio<<endl;

	int tam=0;
 
	cout<<"Cuantos notas desea ingresar:";
	cin>>tam;
	int notas [tam];// notas[4]
	  for (int i=0;i<tam;i++){	
	    cout<<"Ingrese Nota"<<i+1<<":";
	    cin>>notas[i];
	  }

	  for (int i=0;i<tam;i++){
	    cout<<notas[i]<<endl;
	  }

	int notas [4] ; // indice o posicion del arreglo inicia en 0
	notas[0] = 80;
	notas[1] = 65;
	notas[2] = 60;
	notas[3] = 75;	


	for (int i=0; i<4; i++){

	cout<<notas[i]<<endl;
 	}
	
	for (int i : notas){
	cout<<i<<endl;
	}
	cout<<notas[0]<<endl;
	cout<<notas[1]<<endl;
	cout<<notas[2]<<endl;
	cout<<notas[3]<<endl;*/


 cout<<"todo bien"<<endl;

  return  0;
}
