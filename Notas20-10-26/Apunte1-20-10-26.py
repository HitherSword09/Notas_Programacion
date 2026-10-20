#Aldo Aguilar Salum
#Apunte1
'''
            Diferencias
C++ (arreglos)          | Python (Listas)
tamaño es fijo          | Tamaño dinamico
Son de un mismo tipo    | Pueden ser del mismo tipo o combinados

Similares
- Acceso a los elementos
- Posiciones (indice)

Para curiosos --> arrays con numpy

'''

#Declarar o definir listas Python

#Listas vacias
lista = []
print(lista)

#Listas con elementos numericos
primos = [2,3,6,7,11,13]

#Lista con elementos cadenas
dias = ["lunes","martes","miercoles","jueves","viernes"]

print(primos)
print(dias)

#lista con elementos combinados
fecha = [20,"octubre",2026,8.49]
print(fecha)

#lista de listas
peliculas = [["Spider-man Brand new day",2026],["El retorno del rey",2023]]
print(peliculas)

lista = [primos, dias, fecha]
print(lista)