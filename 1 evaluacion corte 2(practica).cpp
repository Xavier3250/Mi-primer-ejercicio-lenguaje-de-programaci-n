/*
CALCULE DE AGUA EN UNA VIVIENDA DADO EL NUMERO DE LITROS GASTADOS, SIENDO EL SISTEMA DE COBRO:-
La CUOTA FIJA ES DE 600.
A)LOS PRIMEROS 60 LITROS SON GRATIS
B)ENTRE 50 Y 200 LITROS SE COBRA EL LITRO A 0,75 BS
C)A PARTIR DE 200 LITROS SE COBRA EL LITRO A 200 BS
*/


#include<iostream>
using namespace std;
int main(){
	int Cuotafija=600;
	int opc=0;
	int litros=0;
	int litrostotal=0;
	int cobrarlitros=0;
	int gratis=60;
	int Totalpagar=0;
	
	do{
		
		cout<<"Ingrese litros"<<endl;
		cin>>litros;
		
		if(litros<=60){
			cout<<"Cuota de 60 litros en uso"<<endl;
		}else{
			litrostotal=litros-gratis;
		}
		if(litrostotal>=50 && litrostotal<=200){
			cobrarlitros=0.75 * litrostotal;	
		}else if(litrostotal>=200){
			cobrarlitros=200 * litrostotal;
		}else{
			Totalpagar= Cuotafija;
		}
			Totalpagar= Cuotafija + cobrarlitros;
			
		cout<<"Cuota fija: "<<Cuotafija<<"BS"<<endl;	
		cout<<"Litros ingresados: "<<litrostotal<<endl;
		cout<<"Costo: "<<Totalpagar<<endl;
			cout<<"Desea continuar? "<<endl;
			cout<<"SI(1) "<<endl;
			cout<<"No(2) "<<endl;
	}while(opc==1);
	
	
	
	return 0;
}
