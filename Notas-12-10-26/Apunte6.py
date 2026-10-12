#Aldo Aguilar Salum
#Apunte 6. Usos del for

#-----rango
#-----ejemplo 1
#(end= " ") deja un espacio e inserta el siguiente print en la misma linea.

for i in range(3):
    print(i, end=" ")

print()
for i in range(5):
    print("Hola", end=" ")

print()
for i in range(5, 50,2):
    print(i, end=" ")

print()
for i in range(10, 0, -1):
    print(i, end=" ")

print()
#-----Listas
#La variable i toma cada uno de los elementos en la lista.
for i in ("Programacion", "Matematicas", "Algebra", "Calculo"):
    print(i, end=" ")

print()
#Las listas se establecen con []
lista = ["Mexico", "Guatemala", "Belice", "El Salvador", "Colombia", "Brasil"]

for i in lista:
    print("Estoy en:",i)

print()
#-----Cadenas
for i in ("Anahuac Mayab"):
    print(i, end="-")