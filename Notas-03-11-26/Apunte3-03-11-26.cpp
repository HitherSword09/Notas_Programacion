//Aldo Aguilar Salum
//Apunte 3
//Realizar las operaciones aritmetica sbasicas utilizando funciones para cada operacion
//Utilizar un menu para que el usuario elija la operacion.
//Validar la division por cero.

#include <iostream>
using namespace std;

int a, b; //Variables globales

void lectura() {
	cout << "Ingresa el primer valor: "; cin >> a;
	cout << "Ingresa el segundo valor: "; cin >> b;
}

void suma() {
	cout << "La suma es: " << a + b << endl;
}

void resta() {
	cout << "La resta es: " << a - b << endl;
}

void multiplicacion() {
	cout << "El producto es: " << a * b << endl;
}

void division() {
	if (b != 0) {
		cout << "La division es: " << a / b << endl;
	}
	else {
		cout << "Es division por cero" << endl;
	}
}

int main() {

	int op;
	cout << "OPERACIONES ARITMETICAS" << endl;
	cout << "1. Suma" << endl;
	cout << "2. Resta" << endl;
	cout << "3. Multiplicacion" << endl;
	cout << "4. Division" << endl;
	cout << "Selecciona una opcion: "; cin >> op;

	if (op <= 4 && op > 0) {
		lectura();
	}
	
	switch (op) {
		case 1: suma(); break;
		case 2: resta(); break;
		case 3: multiplicacion(); break;
		case 4: division(); break;
		default: cout << "Opcion incorrecta!" << endl;
	}
	return 0;
}