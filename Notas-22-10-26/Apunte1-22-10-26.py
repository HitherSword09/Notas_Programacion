#Aldo Aguilar Salum
#Apunte. Aleatorios en Python
import random

#random() ---> Generar valores aletorios entre 0 y 1 (Nunca llega al 1)
valor = random.random()
print("Valor generado (0 y 1):",valor)

#randrange(a) - randrange(a,b) - randrange(a,b,c) ---> el limite es b-1
valor = random.randrange(10)
print("Valor generado (0 y 9):",valor)

valor = random.randrange(1,11)
print("valor generado (1 y 10):",valor)

valor = random.randrange(50,151,5)
print("Multiplos de 5 en un rango de 50 a 150:",valor)

#randint(a,b) - SI toma en cuenta el rango como tal, por lo que a b NO se le resta 1
valor = random.randint(1,10)
print("Valor generado (1 y 10):",valor)

#uniform(a,b) - valores que incluyen decimales | limite = b-1 | Nunca llega a los limites como tal, simepre devuelve decimales.
valor = random.uniform(5,8)
print("Valor generado (1 y 10):",valor)

#Elegir de forma aleatoria de una lista - puede ser una lista pre hecha, o una especificada
#choice(lista/secuencia)
valor = random.choice((10,20,30,40,50))
print("Valor elegido:", valor)

dias = ["lunes","martes","miercoles","jueves","viernes"]
valor = random.choice(dias)
print("Valor elegido:",valor)

valor = random.choice(["elefante","leon","cebra","capibara"])
print("Valor elegido:",valor)

valor = random.choice("ANAHUAC-MAYAB")
print("Valor.elegido:",valor)
