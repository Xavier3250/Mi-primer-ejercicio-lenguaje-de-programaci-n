/*   2)Escriba un programa que calcule el promedio de 4 notas ingresadas por el usuario.   */
 
 #include <iostream>
 using namespace std;
 int main(){
 	int nota1=0;
 	int nota2=0;
 	int nota3=0;
 	int nota4=0;
 	float promedio=0;
 	
 	cout<<"ingrese nota1"<<endl;
 	cin>>nota1;
 	cout<<"ingrese nota2"<<endl;
 	cin>>nota2;
 	cout<<"ingrese nota3"<<endl;
 	cin>>nota3;
 	cout<<"ingrese nota4"<<endl;
 	cin>>nota4;
 	 promedio= nota1/4+nota2/4+nota3/4+nota4/4;

cout<<"Promedio es:   "<<promedio<<endl;
 	
 	return 0;
 	
 }
 
 
