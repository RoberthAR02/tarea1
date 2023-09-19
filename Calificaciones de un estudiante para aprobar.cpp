#include <iostream>
#include <locale.h>

using namespace std;
int main() {
	
	setlocale(LC_CTYPE,"Spanish");
	float practicas, examenes, trabajo_final, promedio;

    cout << "Ingrese la calificación de prácticas (maximo 20%): "<<endl;
    cin >> practicas;

    cout << "Ingrese la calificación de exámenes (maximo 50%): "<<endl;
    cin >> examenes;

    cout << "Ingrese la calificación de trabajo final (maximo 30%): "<<endl;
    cin >> trabajo_final;

    promedio = (practicas + examenes + trabajo_final);

    cout << "La calificación final es: " << promedio << endl;

    if (promedio >= 70) {
        cout << "El estudiante aprobó el curso." << endl;
    } else {
        cout << "El estudiante reprobó el curso." << endl;
    }
	return 0;
}
