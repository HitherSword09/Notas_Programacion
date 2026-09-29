"""
Aldo Aguilar Salum

Apunte2
Realizar un algoritmo que lea o capture dos valores.
Si e primer valor es menor al segundo valor, hacer 
la suma; de lo contrario, hacer la diferencia.
Si son iguales hacer la multiplicacion.
"""

val1 = int(input("Valor No.1: "))
val2 = int(input("Valor No.2: "))
#Procesos parciales
if val1 < val2:
    res = val1 + val2
elif val1 > val2:
    res = val1 - val2
else:
    res = val1 * val2

print(f"Resultado: {res}")