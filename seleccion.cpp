#include <iostream>
using namespace std;

int main (){
	/*formas de incrememtar :i++, i+=1, i=i+1
	int contar=0;
	for (int i=0;i<=10;i+=1){//0 hasta 10
	  cout<<i<<endl;
	    contar++;
	}
	cout<<"ciclos"<<contar<<endl;
	

	//formas de deincrementar: i--,i-=1, i=i-1
	for (int i=10;i>0;i=i-1){//10 hasta 0
	    if(i==5){
	    cout<<"if"<<endl;
	      continue;   
	      //break; Lo utilizo para parar.
	    }

	  cout<<i<<endl;
	}

	//float increto en decimales
	
	for(float i=0;i<=1;i+=.10){
	  cout<<i<<endl;
	}

	//arreglos
	int datos [5] = {10,40,100,200,3000};	
	for (int i=0;i<5;i++){
	  cout<<datos[i]<<endl;
	}

	//otra manera de hacer un arreglo
	
	int tam =5;
	int datos[tam] ={10,40,100,200,3000};
	for (int i=0;i<tam;i++){
	  cout<<datos[i]<<endl;
	}

	//otra manera de hacer un arreglo.
	//recordatorio que un "int" tiene bytes.

	int tam = 0;	
	int datos [] ={10,40,100,200,3000};
	tam = sizeof(datos) / sizeof(datos[0]);
	for (int i=0;i<tam;i++){
	    cout<<datos[i]<<endl;
	}
	
	//otra manera mas simple

	int datos [] = {10,40,100,200,3000};

	for (int i: datos){
	    cout<<i<<endl;
	}*/

	int inicio =0, fin =0, res = 0;
	
	cout<<"ingrese tabla inicial:";
	cin>>inicio;
	cout<<"ingrese tabla final:";
	cin>>fin;

	for (int rango = inicio; rango<=fin;rango++){
	cout<<"tabla del"<<rango<<endl;	
		for(int i=1;i<=10;i++){//for anidadas
		   res = rango * i;
		   cout<<rango<<" x "<< i <<"="<<res<<endl;
		}

	}


cout<<"todo bien"<<endl;
  return 0;
}
