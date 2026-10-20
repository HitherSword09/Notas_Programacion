#Aldo Aguilar Salum
#Ejercicios
'''
Ejercicio 1.
Declara una lista de numeros con los siguientes
valores: 10, 21, 4, 45, 66, 93, 11
Imprima los elementos de la lista utilizando un ciclo
Deterine cuantos son pares y cuantos son impares
'''

'''
Ejercicio 2.
Pide a un usuario agregar 10 valores a una lista
(los valores pueden ser numericos, reaes o cadenas)
Imprime los valores de la lista
Luego invierte los elementos de la lista y muestralos
Ejemplo: [45,21,85,78,99,1,0,78,33,10]
Salida: [10,33,78,0,1,99,78,85,21,45]
'''
#Ejercicio 1
par = 0
impar = 0
lista = [10, 21, 4, 45, 66, 93, 11]
for i in range(6):
    print(lista[i], end=" ")
    if lista[i] % 2 == 0:
        par = par + 1
    else:
        impar = impar + 1
print(f"Numero de pares: {par}")
print(f"Numero de impares: {impar}")

#Ejercicio 2
lista = []
print("Ingresa 10 valores de cualquier tipo")
for i in range(10):
    v = input("Valor: ")
    lista.append(v)
print()

for i in range(9,-1,-1):
    print(lista[i],end=" ")
