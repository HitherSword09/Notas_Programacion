/* Aldo Aguilar Salum
- Realizar un programa	que simule la boleta de un estudiante.
- El programa debera preguntar cuantas materias desea ingresar.
- El nombre de las materias y la calificacion de las materias deberan almacenarse
en un arreglo string y otro int respectivamente.
- Las calificaciones de la materia se deberan generar de forma aleatoria
en un rango de 5 a 10.
- Al final debera mostrar la suma y el promedio de las calificaciones.
- Imprimir un grafico de frecuencias por cada calificacion y e promedio final.
Ejemplo: 
Materia 1, 9 : *********
Materia 2, 5 : *****
Materia 3, 7 : *******
Promedio,  7 : *******
*/

#include <iostream>
#include <cstdlib> //Funciones rand()
#include <ctime> // tiempo del sistema
using namespace std;

int main() {
	//semilla
	srand(time(nullptr));

	int promedio, suma = 0;
	int num_materias = 0;
	string materias[100];
	int calificaciones[100];

	cout << "Ingresa el numero de materias deseadas: ";
	cin >> num_materias;

	

	for (int i = 0; i < num_materias; i++) {
		materias[i] = "Materia ";
		calificaciones[i] = rand() % 6 + 5;
		suma = suma + calificaciones[i];
		cout << materias[i] << i + 1 << ", ";
		cout << calificaciones[i] << ": ";
		for (int j = 0; j < calificaciones[i]; j++) {
			cout << "*";
		}
		cout << endl;


	}

	promedio = suma / num_materias;
	cout << "Promedio , " << promedio << ": ";
	for (int j = 0; j < promedio; j++) {
		cout << "*";
	}
	cout << endl;

	return 0;
}