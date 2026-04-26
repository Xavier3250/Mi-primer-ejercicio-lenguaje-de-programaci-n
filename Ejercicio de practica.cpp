/*    1) Escriba un programa que reciba como entrada el radio de un círculo
 y entregue como salida su perímetro y su área  */
 
 #include <iostream>
 using namespace std;
 int main(){
 	float radio=0;
 	float area=0;
 	float perimetro=0;
 	
 	cout<<"ingrese el radio"<<endl;
 	cin>>radio;
 	 perimetro= 2 * 3.1416 * radio;
 	 area= 3.1416 * (radio * radio);

cout<<"Perimetro es:   "<<perimetro<<endl;
cout<<"area es:   "<<area<<endl;
 	
 	return 0;
 	
 }
 
 
