#include <iostream>
using namespace std;
int main(){
 int barrilesA=0;
 int barrilesB=0;
 int pureza=0;
 int sumabarrilesA=0;
 int sumabarrilesB=0;
 int PromediodebarrilesA=0;
 int PromediodebarrilesB=0;
  for(int i=1 ; i<=8 ; i++){
  	cout<<"ingrese nivel de pureza del 1 al 100"<<endl;
  	cin>>pureza;
  	if(pureza>=70 && pureza<=100){
  		cout<<"ES grado A"<<endl;
  		sumabarrilesA+=pureza;
  		barrilesA+=1;
	  }else if(pureza<70 && pureza >=1){
	  	cout<<"Es grado B"<<endl;
	  	sumabarrilesB+=pureza;
	  	barrilesB+=1;
	  }else{
	  	cout<<"Error: Pureza invalida" <<endl;
	  }
  }
  PromediodebarrilesA= sumabarrilesA / barrilesA;
  PromediodebarrilesB= sumabarrilesB / barrilesB;
  cout<<"Suma barriles de pureza A: "<<sumabarrilesA<<endl;
  cout<<"Suma barriles de pureza B: "<<sumabarrilesB<<endl;
  cout<<"Suma barriles de A: "<<barrilesA<<endl;
  cout<<"Suma barriles de B: "<<barrilesB<<endl;
  cout<<"Promedio de pureza de barriles grado A: "<<PromediodebarrilesA<<endl;
  cout<<"Promedio de pureza de barriles grado B: "<<PromediodebarrilesB<<endl;
	
	return 0;
}
