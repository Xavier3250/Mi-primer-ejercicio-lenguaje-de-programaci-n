#include<iostream>
using namespace std;
int main(){
	float precio=0;
	float totalLaptops=0;
	int accesoriosbaratos=0;
	float LaptopPro=0;
	int articulo=0;
	
	for(int i=1 ; i<=5 ; i++){
		cout<<"Introduce precio del articulo"<<endl;
		cin>>precio;
		cout<<"Introduce tipo de articulo"<<endl;
		cin>>articulo;
		if(articulo>0 && articulo<2){
				cout<<"Es una laptop"<<endl;
				totalLaptops+= precio;
				if(precio>LaptopPro){
					cout<<"Es una laptopPro"<<endl;
					LaptopPro=precio;
				}else{
					cout<<"..."<<endl;
				}
				
		}else if(articulo>1 && articulo<3){
			cout<<"Es un accesorio"<<endl;
			if(precio<20){
					cout<<"Es un articulo en oferta"<<endl;
					accesoriosbaratos+=1;
					;
				}else{
					cout<<"..."<<endl;
				}
		
		}else{
			cout<<"Caracteres invalidos"<<endl;
		}
	}
	
	cout<<"Precio total de laptops:  "<<totalLaptops<<endl;
	cout<<"Cuantos accesorios menos de 20 dolares compro:  "<<accesoriosbaratos<<endl;
	cout<<"Laptop mas cara:  "<<LaptopPro<<endl;

	
return 0;	
}
