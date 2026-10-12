//Aldo Aguilar Salum
//Apunte1 - for-while
//Estructuras cicilicas
//1. do-while	(Repetir-Mientras)
//2. while	(Mientras)
//3.for	(Para)

#include <iostream>
using namespace std;

int main() {
	int numero;
	numero = 1;

	do {
		cout << numero << endl;
		numero = numero + 1;
	} while(numero <= 10);

	return 0;
}