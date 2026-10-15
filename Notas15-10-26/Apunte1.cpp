//Aldo Aguilar Salum
//Apunte1. Arreglos
#include <iostream>
using namespace std;

int main() {

	//Arreglo con valores iniciales
	int c[] = { 12, 3, 27, 16, 4, 51, 8, 40 };

	cout << c[0] << endl;
	cout << c[1] << endl;
	cout << c[2] << endl;
	cout << c[3] << endl;
	cout << c[4] << endl;
	cout << c[5] << endl;
	cout << c[6] << endl;
	cout << c[7] << endl;

	//Arreglos sin valores iniciales
	string materias[5];

	cout << "Ingresa la materia 1: ";
	cin >> materias[0];

	cout << "Ingresa la materia 2: ";
	cin >> materias[1];

	cout << "Ingresa la materia 3: ";
	cin >> materias[2];

	cout << "Ingresa la materia 4: ";
	cin >> materias[3];

	cout << "Ingresa la materia 5: ";
	cin >> materias[4];

	int i;
	cout << "Ingresa el numero de materia que quieres mostrar: ";
	cin >> i;
	cout << materias[i - 1];


	return 0;
}