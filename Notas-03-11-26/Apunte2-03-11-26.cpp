//Aldo Aguilar Salum
// Apunte 2.
//Realizar las operaciones aritmetica sbasicas utilizando funciones para cada operacion
//Utilizar un menu para que el usuario elija la operacion.
//Validar la division por cero.

#include <iostream>
using namespace std;

void suma() {
	int a, b;
	cout << "Ingresa el primer valor: "; cin >> a;
	cout << "Ingresa el segundo valor: "; cin >> b;
	cout << "La suma es: " << a + b << endl;
}

void resta() {
	int a, b;
	cout << "Ingresa el primer valor: "; cin >> a;
	cout << "Ingresa el segundo valor: "; cin >> b;
	cout << "La resta es: " << a - b << endl;
}

void multiplicacion() {
	int a, b;
	cout << "Ingresa el primer valor: "; cin >> a;
	cout << "Ingresa el segundo valor: "; cin >> b;
	cout << "El producto es: " << a * b << endl;
}

void division() {
	int a, b;
	cout << "Ingresa el primer valor: "; cin >> a;
	cout << "Ingresa el segundo valor: "; cin >> b;
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

	switch (op){
		case 1: suma(); break;
		case 2: resta(); break;
		case 3: multiplicacion(); break;
		case 4: division(); break;
		default: cout << "Opcion incorrecta!" << endl;
	}
	return 0;
}