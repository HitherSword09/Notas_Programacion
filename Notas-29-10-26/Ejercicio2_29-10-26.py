#Aldo Aguilar Salum
#Ejercicio 2

peso = float(input("Ingresa tu peso en kg: "))
estatura = float(input("Ingresa tu estatura en metros: "))

imc = peso / (estatura**2)

print(f"Tu indice de masa corporal es: {imc:.2f}")