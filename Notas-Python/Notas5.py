#Aldo Aguilar Salum
#Calcular el area y perimetro de un triangulo
#asumir que es un triangulo equilatero

altura = float(input("Ingresa la altura del triangulo: "))
base = float(input("Ingresa la base del triangulo: "))

area = (base * altura) / 2
perimetro = base * 3

print(f"El area de tu triangulo es: {area}, mientras que su perimetro es: {perimetro}")