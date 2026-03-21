#include <iostream>

using namespace std;

int main (){
	//areglos bidimensionales, matriz, tabla


	int fil=0, col=0;
	///cout<<"Filas: 0,1, Columnas:0,1,"<<endl;
	cout<<"Ingrese Filas: ";
	cin>>fil;
	cout<<"Ingrese Columnas: ";
	cin>>col;
	int matriz [fil][col];
	cout<<"----------ingresarr--------"<<endl;
	for (int i=0;i<fil;i++){
	    for(int ii=0;ii<col;ii++){
	    cout<<i<<","<<ii<<": ";
	    cin>>matriz[i][ii];
	    }
	    cout<<"________________"<<endl;
	 }
	cout<<"--------Mostrar---------"<<endl;		
	for (int i=0;i<fil;i++){
	  for(int ii=0;ii<col;ii++){
	    cout<<i<<","<<ii<<": "<<matriz[i][ii]<<endl;
	  }
	}

	/*int matriz [2][3] = {{10,20,30},{40,50,60}};//la primera llave cerrada es la linea 0, y la segunda la linea 1.
	
	for (int i=0;i<2;i++){
	    for(int ii=0;ii<3;ii++){
	    cout<<i<<","<<ii<<": "<<matriz[i][ii]<<endl;
	    }
	 }
	cout<<"0,0: "<<matriz[0][0]<<endl;
	cout<<"0,1: "<<matriz[0][1]<<endl;	
	cout<<"0,2: "<<matriz[0][2]<<endl;	
	cout<<"1,0: "<<matriz[1][0]<<endl;
	cout<<"1,1: "<<matriz[1][1]<<endl;
	cout<<"1,2: "<<matriz[1][2]<<endl;*/
	
cout<<"Todo correcto"<<endl;
  return 0;
}
