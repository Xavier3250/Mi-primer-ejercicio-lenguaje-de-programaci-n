#include <iostream>
 using namespace std;
 int main(){
 	int n=0;
 	int unidad1=0;
 	int decena2=0;
 	int centena3=0;
 	int original=0;
 	float invertido=0;
 	
 	cout<<"ingrese numero de tres digitos"<<endl;
 	cin>>n;
 	if(n >= 100 && n <= 999) { original = n;
    unidad1 = n / 100;
 	decena2 =( n / 10) % 10;
    centena3 = n % 10;
    invertido = (centena3 * 100) + (decena2 * 10) + unidad1;
 	cout<<"numero innvertido es  "<<invertido<<endl;
 	cout<<"numero original es  "<<original<<endl;
 	
}else { cout<<"Error: El numero ingresado no es de tres digitos. "<<endl;}

 	
 	return 0;
 	
 }
