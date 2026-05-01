/*
Gestion de una subestacion electrica
Vas a procesar los datos de *3 Transformadores*. Para cada uno, vas a pedir:
 1. El *voltaje* actual (un número float).
 2. El *estado* del transformador (usando un int como menú):
   * *1:* Estable.
   * *2:* En mantenimiento.
   * *3:* Sobrecarga.
*Tu programa debe calcular:*
 * *Total de voltaje:* Sumar el voltaje de los 3 transformadores.
 * *Alerta de Seguridad (Switch):*
   * Si el estado es *1 (Estable)*: Solo imprime "Operación normal".
   * Si el estado es *2 (Mantenimiento): Al total de voltaje que llevas, **réstale* el voltaje de ese transformador (porque no está aportando energía).
   * Si el estado es *3 (Sobrecarga)*: Imprime un aviso de "¡PELIGRO!" y muestra el voltaje de ese transformador multiplicado por 1.5 (para ver el pico de energía).
   * *Default:* "Código de estado desconocido".
*Condición extra de lógica:*
Si al final el *voltaje total* es mayor a 500, imprime un mensaje que diga: "Red saturada". Si es menor o igual, imprime: "Red eficiente".
*/

#include<iostream>
using namespace std;
int main (){
	float voltaje=0;
    int estado=0;
    float totalvoltajes=0;
    int menu=0;
    float picodeenergia=0;
    float totalParcial=0;
    
  for(int i=1 ; i<=3; i++){
	cout<<"Voltaje actual"<<endl;
    cin>>voltaje;
    cout<<"Ingrese el estado del transformador 1 al 3"<<endl;
    cin>>menu;
    
    
  switch(menu){
  	case 1: 
	   cout<<"Operacion normal"<<endl;
	   totalvoltajes+=voltaje;
	   totalParcial = totalvoltajes;
	    cout<<"total Parcial:  "<<totalParcial<<endl;
	   break;
	case 2: 
	   cout<<" Mantenimiento "<<endl;
	   totalParcial= totalvoltajes;
	    cout<<"total Parcial:  "<<totalParcial<<endl;
	   break;
	case 3: 
	   cout<<"¡PELIGRO!"<<endl;
	   picodeenergia= (voltaje * 1.5);
	   cout<<"Pico de energia:    "<<picodeenergia<<endl;
	   totalvoltajes = totalParcial + voltaje;
	   break;
	default: 
	   cout<<"codigo de estado desconocido"<<endl;
	   break;
  }
	
}
if(totalvoltajes>500){
	cout<<"Red saturada"<<endl;
}else if(totalvoltajes<=500){
	cout<<"Red eficiente"<<endl;
}
cout<<"Voltaje total:   "<<totalvoltajes<<endl;

return 0;
}

  


