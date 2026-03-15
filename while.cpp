#include <iostream>
using namespace std;

int main(){
	/*
	int i =5;
	while (i<5){//con con el while primero valida codicion y despues ejecuta.
		cout<<"while"<<i<<endl;
		i++;

	}


	//uso de do while, la diferencia con while es primero se ejucuta y despues valida la codicion.
	int ii =5;
	do{
	   cout<<"do while"<<ii<<endl;
	   ii++;

	   }while (ii<5);
	

	char respuesta;
	do{
	   cout<<"Desa ingresar otro valor (s/n)";
	   cin>>respuesta;

	   }while (respuesta == 's'|| respuesta=='S');
	*/
	

	char respuesta ='s';
	while (respuesta == 's'|| respuesta=='S'){
	   cout<<"Desa ingresar otro valor (s/n)";
	   cin>>respuesta;

	   };
	



cout<<"Todo correcto"<<endl;
 return 0;
}
