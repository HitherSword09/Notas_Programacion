#Aldo Aguilar Salum
#Vendedor que recibe una comision dependiendo de sus ventas

salBas = float(input("Ingrese su salario basico: "))
ventas = float(input("Ingrese la cantidad de pesos en ventas: $"))

if ventas < 100000:
    comPor = 0.10
else:
    comPor = 0.15

com = comPor * ventas
salFin = salBas + com

print(f"La comision es: ${com}")
print(f"Tu sueldo final es: ${salFin}")