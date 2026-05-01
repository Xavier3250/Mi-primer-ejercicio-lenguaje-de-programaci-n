#include<iostream>
using namespace std;
int main(){
	int opciones=0;
	
	cout<<"seleccione clase para iniciar juego"<<endl;
	cin>>opciones;
	
	switch(opciones){
		case 1:
			cout<<"Has elegido Guerrero"<<endl;
			break;
		case 2:
			cout<<"has elegido mago"<<endl;
			break;
		case 3:
			cout<<"has elegido tirador"<<endl;
			break;
		case 4:
			cout<<"has elegido soporte"<<endl;
			break;
		case 5:
			cout<<"has elegido tanque"<<endl;
			break;
		default: cout<<"Error: Solo de 1 a 5"<<endl;
			break;
	}
		
return 0;	
}
