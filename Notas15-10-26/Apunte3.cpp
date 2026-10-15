//Aldo Aguilar Salum
//Pedri al usuario 5 numeros enteros, guardarlos en un arreglo y
//mostrarlos en orden inverso al que fueron ingresados.
//Utilizar ciclos para pedir y mostrar valores.

#include <iostream>
using namespace std;

int main() {
	string num[5];

	for (int i = 0; i < 5; i++) {
		cout << "Ingresa un numero entero " << i + 1 << ": ";
		cin >> num[i];
	}

	for (int i = 4; i >= 0; i--) {
		cout << num[i] << ", ";
	}

	return 0;
}