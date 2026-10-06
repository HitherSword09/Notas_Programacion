#Apunte 2 - Area y perimetro de un curculo
#Aldo Aguilar Salum
import math

radio = float(input("Ingresa el radio del circulo: "))

area = 3.1415987552 * radio * radio 
print("Area (sin formato): ", area)

area = math.pi * radio ** 2
print(f"Area (con formato): {area:.4f}")

area = math.pi * pow(radio, 2)
print(f"Area (con formato): {area:.3f}")

perimetro = 2 * radio * math.pi
print(f"El perimetro es (con formato): {perimetro:.3f}")