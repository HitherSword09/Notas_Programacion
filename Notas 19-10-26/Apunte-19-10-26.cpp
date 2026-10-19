//Aldo Aguilar Salum
//Valores pseudo-aleatorios
#include <iostream>
#include <cstdlib> //Funciones rand()
#include <ctime> // tiempo del sistema
using namespace std;

int main() {
	//semilla
	srand(time(nullptr));

	int num;

	num = rand(); //Genera un valor aleatorio y lo asigna a 

	cout << "valor ppseudo - aleatorio: " << num << endl;

	//Valores entre 0-10
	num = rand() % 11;
	cout << "Valor entre 0-10: " << num << endl;

	//Valores entre 1-10
	num = rand() % 10 + 1;
	cout << "Valor entre 1-10: " << num << endl;

	//Valores entre 5-15
	num = rand() % 11 + 5;
	cout << "Valor entre 5-15: " << num << endl;

	//Valores entre 180-220
	num = rand() % 41 + 180;
	cout << "Valor entre 180-220: " << num << endl;

	return 0;
}