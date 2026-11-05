//Aldo Aguilar Salum
//Apunte1
/********************************************
Funciones - con return / con parametros
*********************************************/

#include <iostream>
#include <string>		//Necesario para utilizar to_string
using namespace std;

int potencia2(int num) {
	return num * num;
}

bool esPar(int num) {
	if (num % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

string calcularEdad(int anio) {
	int edad = 2026 - anio;
	return "Tu edad es " + to_string(edad) + " anios";
}

int main() {

	//--- Funcion potencia2
	int x;
	x = potencia2(9);
	cout << "Potencia 2 de (9): " << x << endl;

	cout << "Potencia 2 de (15): " << potencia2(15) << endl;

	int numero;

	cout << "Ingresa un valor: ";
	cin >> numero;

	cout << "Potencia 2 de (" << numero << "): " << potencia2(numero) << endl;

	//--- Funcion esPar
	// 0 = false / 1 = true
	cout << "9 Es Par: " << esPar(9) << endl;
	cout << "62 Es Par: " << esPar(62) << endl;

	//   << boolalpha << cambia la salida de 1/0 a true/false
	cout << boolalpha <<"71 Es Par: " << esPar(71) << endl;		
	cout << boolalpha <<"28 Es Par: " << esPar(28) << endl;

	//--- Funcion Calcular Edad
	int anioNac;
	cout << "Ingresa tu anio de nacimiento: "; cin >> anioNac;
	cout << calcularEdad(anioNac) << endl;

	return 0;
}