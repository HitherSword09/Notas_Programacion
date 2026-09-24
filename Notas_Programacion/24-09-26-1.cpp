//Aldo Aguilar Salum
//Notas1
#include <iostream>

int main() {
	//Definicion de variables
	double val1, val2, res;

	//Obtencion de datos
	std::cout << "Ingresa el valor #1: ";
	std::cin >> val1;
	std::cout << "Ingresa el valor #2: ";
	std::cin >> val2;

	//Operacion
	if (val1 < val2) {
		res = val1 + val2;
	}
	else {
		if (val1 > val2) {
			res = val1 - val2;
		}
		else {
			res = val1 * val2;
		}
	}

	//Mostrar resultado
	std::cout << "Resultado: " << res;

	//fin
	return 0;
}