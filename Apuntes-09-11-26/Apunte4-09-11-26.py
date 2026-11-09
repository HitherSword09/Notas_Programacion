#Aldo Aguilar Salum
#Apunte4
def potencia2(num):
    return num * num

def esPar(num):
    if num % 2 == 0:
        return True
    else:
        return False

def calE(anio):
    edad = 2026 - anio
    return "Tu tienes " + str(edad) + " anios"

x = potencia2(9)
print("potencia 2 de (9): ", x)

print("potencia 2 de (15): ", potencia2(15))

num1 = int(input("Ingresar un valor: "))
print(f"potenci 2 de ({num1}): {potencia2(num1)}")

print("9 es par:", esPar(9))
print("62 es par:", esPar(62))

anioNac = int(input("Ingresar tu anio de nacimiento: "))
print(calE(anioNac))