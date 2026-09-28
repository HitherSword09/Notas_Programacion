"""
Alo Aguilar Salum

Determina el porcentaje d ehombres y de mujeres
presentes en el curso de Algoritmos, si se conoce
el numero de hombres y mujeres que tiene.
"""

hombres = int(input("Ingrese el numero de hombres en el curso: "))
mujeres = int(input("Ingrese el numero de mujeres en el curso: "))

total = hombres + mujeres

porcentajeH = (hombres * 100) / total
porcentajeM = 100 - porcentajeH

print(f"El porcentaje de hombres en el curso es de {porcentajeH}%")
print(f"El porcentaje de mujeres en el curso es de {porcentajeM}%")