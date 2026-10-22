#Aldo Aguilar Salum

'''
1. Generar 9 calificaciones aleatorias de un alumno (rango 5-10),
2. almacenarlas en una lista
3. obtener el promedio y
4. mostrar la graica de frecuencias del promedio y cada calificacion.

Ejemplo
cal1    9 *********
cal2    7 *******
cal3   10 **********
.
.
.
cal9    5 *****

Promedio: 8.4 ********

'''
import random
calificaciones = []
suma = 0

for i in range(9):
    calif = random.randint(5,10)
    calificaciones.append(calif)
print(calificaciones)

for i in range(9):
    print(f"cal{i+1}: {calificaciones[i]} {"*"*calificaciones[i]}")
    suma = calificaciones[i] + suma
promedio = suma / 9

print(f"Promedio: {promedio:.1f} {"*"*round(promedio)}")