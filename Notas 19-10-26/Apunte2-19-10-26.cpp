//Aldo Aguilar Salum
//Arreglo con valores aleatorios dee entre 50-100
#include <iostream>
#include <cstdlib> //Funciones rand()
#include <ctime> // tiempo del sistema
using namespace std;

int main() {
	//semilla
	srand(time(nullptr));

	int promedio, suma = 0;
	int aleatorios[5];

	for (int i = 0; i < 5; i++) {
		aleatorios[i] = rand() % 51 + 50;
		suma = suma + aleatorios[i];
		cout << aleatorios[i] << ", ";
	}

	promedio = suma / 5;
	cout << "\nEl promedio de los valores es: " << promedio << endl;


	return 0;
}