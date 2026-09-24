#include <iostream>
#include <iomanip>

int main() {
	//Definir vars
	double sueldo = 0.0, venta = 0.0, comision = 0.0;

	//Obtencion de datos
	std::cout << "Ingresa tu sueldo base: $";
	std::cin >> sueldo;
	std::cout << "Ingresa el monto de venta total: $";
	std::cin >> venta;

	//Operacion
	if (venta < 100000) {
		comision = venta * 0.10;
	}
	else {
		comision = venta * 0.15;
	}

	//Busque y tambien se puede utilizar un operador ternario
	//double porcentaje = (venta < 10000) ? 0.10 : 0.15;
	//comision = venta * porcentaje;

	double sFinal = sueldo + comision;

	//Salida
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Tendras una comision de: $" << comision
		      << " y tu sueldo incrementara a: $" << sFinal;

	return 0;
}