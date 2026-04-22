/*

se desea calcular el valor de una factura por un producto determinado que puede ser adquirido en una o varias unidades (el precio por unidad es de 250Bs). En
la factura se debe considerar el IVA, que es del 16%. Si la factura supera  loa 1500bs, se debe aplicar un descuento del 5%.
El descuento se aplica a la base disponible(subtotal sin IVA)

*/

#include<iostream> 

	using namespace std;
	
int main(){
	

	float precio=250;
	float iva=0;
	float descuento=0;
	int cantidadProducto=0;
	float subtotal=0;
	float total=0;
	
	cout<<"Bienvenidos al programa"<<endl;
	cout<<"ingrese la cantidad del producto deseado"<<endl;
	cin>>cantidadProducto;
    subtotal=cantidadProducto*precio;
	
	if(subtotal>1500){
		
		descuento= subtotal*0.05;
		subtotal= subtotal-descuento;
	}
	    iva= subtotal*0.16;
	    total= iva+subtotal;
	cout<<"El descuento es  "<<descuento<<endl;
	cout<<"El subtotal es  "<<subtotal<<endl;
	cout<<"El total es  "<<total<<endl;
	cout<<"el iva es  "<<iva<<endl;
	return 0;
}
