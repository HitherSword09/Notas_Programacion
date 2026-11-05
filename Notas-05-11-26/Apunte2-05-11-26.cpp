//Aldo Aguilar Salum
//Apunte2

/*****************************************************************************
Realizar un programa que calcule el area de las figuras geometrcas:
circulo, cuadrado, rectangulo, triangulo y trapecio.

Cada figura debe tener su funcion que reciba como parametros los valores
necesarios para calcular el area y debera retornar ese resultado.

Agregar una funcion que contenga un menu para que el usuario pueda elegir.
*****************************************************************************/

#define _USE_MATH_DEFINES		//Necesario para usar M_PI (pi)
#include<iostream>
#include <iomanip>
#include <cmath>				//Tambien necesario para utilizar pi

using namespace std;

float circulo(float radio) {
	return M_PI * radio * radio;
}

float cuadrado(float lado) {
	return lado * lado;
}

float rectangulo(float base, float altura) {
	return base * altura;
}

float triangulo(float base, float altura) {
	return base * altura / 2;
}

float trapecio(float bMayor, float bMenor, float altura) {
	return (bMayor + bMenor) * altura / 2;
}

void menu() {
	cout << "---AREAS DE FIGURAS GEOMETRICAS---" << endl;
	cout << "1. ciruclo" << endl;
	cout << "2. cuadrado" << endl;
	cout << "3. rectangulo" << endl;
	cout << "4. triangulo" << endl;
	cout << "5. trapecio" << endl;
	cout << "Que opcion eliges?: ";
}

int main() {
	int op;
	menu();
	cin >> op;

	switch (op) {
		case 1: cout << "El area del triangulo es " << fixed << setprecision(2) << circulo(3.5) << endl;
			break;
		case 2: cout << "El area del cuadrado es " << fixed << setprecision(2) << cuadrado(9.7) << endl;
			break;
		case 3: cout << "El area del rectangulo es " << fixed << setprecision(2) << rectangulo(4.9, 5.1) << endl;
			break;
		case 4: cout << "El area del triangulo es " << fixed << setprecision(2) << triangulo(5.2, 1.3) << endl;
			break;
		case 5: cout << "El area del trapecio es " << fixed << setprecision(2) << trapecio(6, 3, 4) << endl;
			break;
		default: cout << "Opcion invalida" << endl; break;
	}

	return 0;
}