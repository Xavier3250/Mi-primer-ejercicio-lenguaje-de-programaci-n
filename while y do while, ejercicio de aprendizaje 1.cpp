#include<iostream>
using namespace std;
int main(){
	int claveCorrecta=1234;
	int intento=1;
	
	cout<<"ingrese clave"<<endl;
	cin>>intento;
	while(intento != claveCorrecta){
			cout<<"ingrese clave nuevamente"<<endl;
			cin>>intento;
	}
	
	
	cout<<"Bienvenido al programa"<<endl;
	
	return 0;
	
	
	
	
	
	
}
