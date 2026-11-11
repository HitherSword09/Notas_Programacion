//Aldo Aguilar Salum
/*****************************************************************************
Diseñar un algoritmo para calcular el máximo común divisor de cuatro números 
basado en un subalgoritmo función mcd (máximo común divisor de dos números).
******************************************************************************/

#include <iostream>
using namespace std;

int mcd(int a, int b) {     //Mientras b != 0, "temp" toma valor de "b", "b" se vuelve (a % b) y "a" toma el valor original de "b"
    while (b != 0) {        //ejemplo: mcd(2, 4): 2 % 4 -> b |temp = 4, b = 2, a = 4. Se repite el ciclo: temp = 2, 4 % 2 -> 0 |
        int temp = b;       //temp = 2, b = 0, a = 2
        b = a % b;
        a = temp;
    }
    return a;
}

//Algoritmo Eucludiano

int mcd_4(num1, num2, num3, num4) {
    int var1 = mcd(num1, num2);
    int var2 = mcd(var1, num3);
    int var3 = mcd(var2, num4);
    return var3;
} 

//Main

int num1; int num2; int num3; int num4;

int main() {
	cout << "Ingresa cuatro numeros: " << endl;
	cin >> num1 >> num2 >> num3 >> num4;

    cout << endl;

    cout << endl;
    cout << "El MCD de " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << " es: " << mcd_4(num1, num2, num3, num4) << endl;
}