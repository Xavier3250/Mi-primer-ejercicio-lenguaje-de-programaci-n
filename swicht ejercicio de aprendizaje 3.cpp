#include<iostream>
using namespace std;
int main(){
  int Calculadora=0;
  float numero1=0;
  float numero2=0;
  int suma=0;
  float resta=0;
  int multiplicacion=0;
  int division=0;
   
  cout<<"ingrese un numero del 1 al 4"<<endl;
  cin>>Calculadora;
  cout<<"ingrese un numero real"<<endl;
  cin>>numero1;
  cout<<"ingrese un numero real"<<endl;
  cin>>numero2;
  switch(Calculadora){
  	case 1:
	   cout<<" suma   "<<endl;
  	suma=numero1 + numero2;
  	break;
  	case 2:
	   cout<<" resta   "<<endl;
  	resta=numero1 - numero2;
  	break;
  	case 3:
	   cout<<" multiplicacion   "<<endl;
  	multiplicacion=numero1 * numero2;
  	break;
  	case 4:
	   cout<<" division   "<<endl;
  	division= numero1 / numero2;
  	if(numero2==0){
  		cout<<"Error: no se puede dividir entre cero  "<<endl;
  		division=0;
	  }else{ cout<<"..."<<endl;
	  }
  	break;
  	
  }
   cout<<"La suma es:  "<<suma<<endl;
   cout<<"La resta es:  "<<resta<<endl;
   cout<<"La multiplicacion es:  "<<multiplicacion<<endl;
   cout<<"La division es:  "<<division<<endl;
   
return 0;

}
