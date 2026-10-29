//Aldo Aguilar Salum

/*
23. Realizar un programa para calcular la velocidad (en m/s) de los corredores de la carrera de 1.500
metros. La entrada consistirá en los minutos y segundos, que dan el tiempo del corredor; por
cada corredor, el programa debe visualizar el tiempo en minutos y segundos, así como la
velocidad media. 
Jugador 1
Min: 3
Seg: 53
el último par de datos se utilizará como fin de entrada de dato.			formula de velocidad: d / t
*/


#include <iostream>
#include <iomanip>

int main() {
	int distancia = 1500;
	int min = 1;
	int seg = 1;
	int count = 1;
	float tiempo = 0;
	float velocidad = 0;

	while (min != 0 || seg != 0) {
		std::cout << "Jugador " << count << std::endl;
		std::cout << "Min: ";
		std::cin >> min;
		std::cout << "Seg: ";
		std::cin >> seg;
		tiempo = min * 60 + seg;
		velocidad = distancia / tiempo;
		std::cout << "Velocidad: " << std::fixed << std::setprecision(2) << velocidad << " m/s" << std::endl;
		count++;
	} 




	return 0;
}

