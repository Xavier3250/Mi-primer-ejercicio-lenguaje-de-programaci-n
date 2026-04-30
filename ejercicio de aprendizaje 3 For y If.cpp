#include <iostream>
using namespace std;
int main(){
	int pares=0;
	int impar=0;
	int numero=0;
	int sumapares=0;
	int sumaimpares=0;
	
	for(int i=1 ; i<=10 ; i++){
		cout<<"ingrese numero"<<endl;
		cin>>numero;
		
		if(numero % 2 == 0){
			cout<<"El numero es par"<<endl;
			pares+=1;
			sumapares+= numero;
		}else{
			cout<<"el numero impar"<<endl;
		      impar+=1;
		      sumaimpares+= numero;
		} 
		    
	}
	cout<<"la cantidad de suma de los pares: "<<sumapares<<endl;
		cout<<"la cantidad de suma de los impares: "<<sumaimpares<<endl;
	cout<<"la cantidad de numeros impares son: "<<impar<<endl;
	cout<<"la cantidad de numeros pares son: "<<pares<<endl;
	
	return 0;
}
