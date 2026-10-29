#Aldo Aguilar Salum
#Ejercicio 41

nombre = str(input("Ingresa el nombre del producto: "))
precio = float(input("Ingresa el precio del producto: "))
numUni = int(input("Ingresa el numero de unidades: "))

cosTot = precio * numUni

#{x:06.2f} - el "06" entero define cuantos digitos totales tendra en formato de salida 
# y los numeros decimales ".2f" muestran la cantidad de digitos decimales.
print(f"Nombre del producto: {nombre}\nPrecio: {precio:06.2f}\nUnidades: {numUni:06.0f}\nCosto Total: {cosTot:08.2f}")