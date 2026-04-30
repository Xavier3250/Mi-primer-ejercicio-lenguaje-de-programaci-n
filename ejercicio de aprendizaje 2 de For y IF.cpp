#include <iostream>
using namespace std;
int main(){
	int edad=0;
	int dinerorecaudado=0;
	
	for(int i=1 ; i<=6  ; i++){
	cout<<"ingrese edad"<<i<<endl;
	cin>>edad;
	if(edad<18){ 
		cout<<"Niño: Paga 5 dolares "<<endl;
		dinerorecaudado+=5;
	}else if(edad>=18 && edad<60){
		cout<<"Adulto: Paga 10 dolares"<<endl;
		dinerorecaudado+=10;
	}else if(edad>=60){
		cout<<"Anciano: Gratis"<<endl;
	}else {cout<<"error"<<endl;
	}
	}
		cout<<"dinero total recaudado: "<<dinerorecaudado<<endl;
		
			return 0;
}


	


