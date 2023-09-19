#include <iostream>

using namespace std;


int main() {
	
	float compra, impuesto, total, exedente;
	
	cout<<"Por favor ingrese el monto de la compra: ";
	cin>>compra;
	
	if(compra<=25000){
		cout<<"El monto de la compra es de: "<<compra<<" y esta exenta de impuestos ";
	}else{
		if(compra<=50000){
			exedente=compra-25000;
			impuesto=exedente*0.02;
			total=compra+impuesto;
			
			cout<<"El monto de la compra es: "<<compra<<endl;
			cout<<"El monto de los impuestos es: "<<impuesto<<endl;
			cout<<"Elmonto total a pagar es: "<<total<<endl;
	    }else{
	    	if(compra<=100000){
	    	exedente=compra-25000;
			impuesto=exedente*0.03;
			total=compra+impuesto;
			
			cout<<"El monto de la compra es: "<<compra<<endl;
			cout<<"El monto de los impuestos es: "<<impuesto<<endl;
			cout<<"Elmonto total a pagar es: "<<total<<endl;
		    }else{
		        exedente=compra-25000;
			    impuesto=exedente*0.05;
			    total=compra+impuesto;
			
			    cout<<"El monto de la compra es: "<<compra<<endl;
			    cout<<"El monto de los impuestos es: "<<impuesto<<endl;
			    cout<<"Elmonto total a pagar es: "<<total<<endl;
			
			}
		}
			
	}
	
	return 0;
}
