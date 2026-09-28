"""
Aldo Aguilar Salum

Un Estudiante desea saber cual es su calificacion
final en el curso de Algoritmos, con los siguientes items de calificaciones:
Primer Parcial: 20%, Segundo Parcial: 20%, Practica: 35%, Parcial Final: 25%
"""

parcial1 = float(input("Ingresa la calificacion de tu primer parcial: "))
parcial2 = float(input("Ingresa la calificacion de tu segundo parcial: "))
practica = float(input("Ingresa la calificacion de tu practica: "))
parcial3 = float(input("Ingresa la calificacion de tu parcial final: "))

calificacion = (parcial1 * 0.20) + (parcial2 * 0.20) + (practica * 0.35) + (parcial3 * 0.25)

print("Tu calificacion final es:", calificacion)