#include <iostream>
#include <locale.h>

using namespace std;
int main() {
	
	setlocale(LC_CTYPE,"Spanish");
	float practicas, examenes, trabajo_final, promedio;

    cout << "Ingrese la calificaci�n de pr�cticas (maximo 20%): "<<endl;
    cin >> practicas;

    cout << "Ingrese la calificaci�n de ex�menes (maximo 50%): "<<endl;
    cin >> examenes;

    cout << "Ingrese la calificaci�n de trabajo final (maximo 30%): "<<endl;
    cin >> trabajo_final;

    promedio = (practicas + examenes + trabajo_final);

    cout << "La calificaci�n final es: " << promedio << endl;

    if (promedio >= 70) {
        cout << "El estudiante aprob� el curso." << endl;
    } else {
        cout << "El estudiante reprob� el curso." << endl;
    }
	return 0;
}
