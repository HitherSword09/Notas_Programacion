//Aldo Aguilar Salum
//Notas2

#include <iostream>
#include <iomanip>

int main() {
	//Definir variables
	double salario, sFinal;
	int anios;

	//Obtencion de datos
	std::cout << "Ingresa tu salario: $";
	std::cin >> salario;
	std::cout << "Ingresa los anios que llevas en la empresa: ";
	std::cin >> anios;

	//Operacion
	if (anios < 5) {
		sFinal = salario * 1.05;
	}
	else if (anios < 10) {
		sFinal = salario * 1.10;
	}
	else if (anios < 15) {
		sFinal = salario * 1.15;
	}
	else if (anios < 20) {
		sFinal = salario * 1.20;
	}
	else if (anios < 25) {
		sFinal = salario * 1.25;
	}
	else if (anios < 30) {
		sFinal = salario * 1.35;
	}
	else {
		sFinal = salario * 1.50;
	}
	

	//Salida
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Tu salario final es de: $" << sFinal;

	return 0;
}