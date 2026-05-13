#include<iostream>
using namespace std;
int main(){
	int usuario=0;
	float totalParcial=0;
	float totalcompras=0;
	int inventario=0;
	int iva=0;
	
	
	do{
		system("cls");
		cout<<"Total a pagar en inventario:    "<<totalcompras<<endl;
		cout<<"Tablets  550 dolares "<<endl;
		
		cout<<"Monitores  205 dolares"<<endl;
		
		cout<<"Teclado  40 dolares"<<endl;
	
		cout<<"Mouse  25 dolares"<<endl;
		
		cout<<"Televisor  2400 dolares"<<endl;
		
		cout<<"Caja de Harina 80 dolares"<<endl;
		
		cout<<"Samsung S25  700 dolares"<<endl;
		
		cout<<"Chupeta 1.5 dolares"<<endl;
		
		cout<<"Cuaderno 2.4 dolares"<<endl;
	
		cout<<"Pagar y salir"<<endl;
		cin>>usuario;
		
	switch(usuario){
			case 1: 
		   totalParcial=550;
	       cout<<"Tablet en inventario"<<endl;
	       cout<<"Total en Compras:   "<<totalParcial<<endl;
	       totalcompras+= totalParcial;
	       iva=totalcompras * 0.16;
	           break;
	        case 2:   
	       totalParcial=205;
	       cout<<"Monitores en inventario"<<endl;
	       cout<<"Total en compras:   "<<totalParcial<<endl;
	       totalcompras+= totalParcial;
	       iva=totalcompras * 0.16;
	           break;
	        case 3:   
	       totalParcial=40; 
	       cout<<"Teclado en inventario"<<endl;
	       cout<<"Total en compras:   "<<totalParcial<<endl;
	       totalcompras+= totalParcial;
	       iva=totalcompras * 0.16;
	           break;
	        case 4:   
	       totalParcial=25; 
	       cout<<"Mouse en inventario"<<endl;
	       cout<<"Total en compras:   "<<totalParcial<<endl;
	       totalcompras+= totalParcial;
	       iva=totalcompras * 0.16;
	           break;
	        case 5:   
	       totalParcial= 2400;
	       cout<<"Televisor en inventario"<<endl;
	       cout<<"Total en compras:   "<<totalParcial<<endl;
	       totalcompras+= totalParcial;
	       iva=totalcompras * 0.16;
	           break;
	        case 6:   
	       totalParcial= 80;
	       cout<<"Caja de Harina en inventario"<<endl;
	       cout<<"Total en compras:   "<<totalParcial<<endl;
	       totalcompras+= totalParcial;
	       iva=totalcompras* 0.16;
		       break;
			case 7:   
	       totalParcial= 700;
	       cout<<"Samsung S25 en inventario"<<endl;
	       cout<<"Total en compras:   "<<totalParcial<<endl;
	       totalcompras+= totalParcial;
	       iva=totalcompras* 0.16;
		       break;
			case 8:   
	       totalParcial= 1.5;
	       cout<<"Chupeta en inventario"<<endl;
	       cout<<"Total en compras:   "<<totalParcial<<endl;
	       totalcompras+= totalParcial;
	       iva=totalcompras* 0.16;
		       break;     
			 case 9:   
	       totalParcial= 2.4;
	       cout<<"Cuaderno en inventario"<<endl;
	       cout<<"Total en compras:   "<<totalParcial<<endl;
	       totalcompras+= totalParcial;
		   iva=totalcompras* 0.16;
		       break;            
			      
			case 10: cout<<"                Gracias por su compra tenga lindo dia    " <<endl;
			  break;
			  
	           default: cout<<"opcion invalida"<<endl;
	           
	}

	}while(usuario != 10); {
	 cout<<"Mostrar Total"<<endl;
	}
	
	cout<<"Total a pagar en inventario:    "<<totalcompras<<endl;
	cout<<"Total iva:      "<<iva<<endl;
	
	
	
	
	
	return 0;
}
