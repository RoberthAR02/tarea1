#include <iostream>

using namespace std;

int main() {
	
	int mes;
	
	cout<<"Iingrese un numero: ";
	cin>>mes;
	
	switch(mes){
		case 2:
			cout<<"Tiene 28 o 29 dias ";
			break;
		case 4:

		case 6:
		
		case 9:
			
		case 11:
			cout<<"Tiene 30 dias ";
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:	
		    cout<<"Tiene 31 dias ";
			break;
				
		default:
			cout<<"El numero ingresado no corresponde ";
			break;
			
	}
	
	
	return 0;
}
