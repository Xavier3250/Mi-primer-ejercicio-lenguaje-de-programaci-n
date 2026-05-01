#include<iostream>
using namespace std;
int main(){
	int oro=100;
	int tienda=0;
	char pocionDevida;
	float coste=0;
	float total=0;
	char pocionDemana;

		cout<<"ingrese 1 o 2 para comprar"<<endl;
		cin>>tienda;
	switch(tienda){
		case 1:
			cout<<"Pocion de vida (Coste: 20)"<<endl;
			total= oro-20;
		break;
		case 2:
			cout<<"Pocion de Mana (Coste: 50)"<<endl;
			total= oro-50;
		break;
		default: 	cout<<"Error: ingrese M o P"<<endl;
		break;
	}
	cout<<"Oro restante:  "<<total<<endl;
	
	
	
	
	
	
	return 0;
	
}
