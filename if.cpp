#include <iostream>
using namespace std;

int main(){
	/*numero es positivo>0 o negativo<0
	int num=0;
	cout<<"ingrese un valor"<<endl;
	cin>>num;

	if(num>0){
		//entra a ca cuando la condicion es verdadera
	cout<<"positivo"<<endl;
	}else{
	  	if(num==0){
		  cout<<"neutro"<<endl;
	  	  }else{
			cout<<"negativo"<<endl;
	  	}
	cout<<"ambito general"<<endl;
	}

	string pais="";
	cout<<"Ingrese el pais"<<endl;
	cin>>pais;
	  if(pais=="guatemala"){
	    cout<<"yo soy de"<<" "<<pais<<" "<<"mi pais"<<endl;
	  }else{
	    cout<<pais<<endl;
	  }

	//determinar si un numer es par o impar

	int num=0;
	cout<<"ingrese un numero"<<endl;
	cin>>num;

	//dividir un numero dos su residuo es cero entonces es par caso contrario es impar
	if((num%2)==0){
	  cout<<"Par"<<endl;
	    }else{
		cout<<"Impar"<<endl;
	    }

	//and (y) && el valor es verdadero si ambas  son verdadera,
	//or (o) || el valor es verdadero si por lo menso una es verdadera.	
	//puede entrar a mi clase si usted un lapiz o lapicero y un cuaderno.

	char lapiz,lapicero,cuaderno;

	cout<<"traen lapiz (s/n):";
	cin>>lapiz;
	cout<<"trae lapicero(s/n):";
	cin>>lapicero;
	cout<<"Trae libreta (s/n):";
	cin>>cuaderno;
	if((lapiz=='s'|| lapicero=='s') && cuaderno  =='s' ){
	  cout<<"Ingresa"<<endl;
	  }else{
		cout<<"Lo siento no puede ingresar"<<endl;
	    }

	
	//funciona = si
	//es eficiente..
	int codigo=0;
	cout<<"ingrese el codigo de are:";
	cin>>codigo;
	switch(codigo){
	  case 502 :
	    cout<<"Guatemala"<<endl;
	    break;
	  case 503 :
	    cout<<"Salvador"<<endl;
	    break;
	  default :
	    cout<<"Este codigo no es de centroamerica"<<endl;
	}*/

	int n1=0,n2=0,n3=0, promedio =0;
	cout<<"Ingrese nota 1:";
	cin>>n1;
	cout<<"Ingrese nota 2:";
	cin>>n2;
	cout<<"Ingrese nota 3:";
	cin>>n3;	
	promedio = (n1+n2+n3)/3;

	cout<<promedio<<endl;

	string mensaje="";
	mensaje = promedio> = 61 ? "Aprobado" :"Reprobado";
	cout<<mensaje<<endl;

	return 0;
}
