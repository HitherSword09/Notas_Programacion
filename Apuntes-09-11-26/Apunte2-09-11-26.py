#Aldo Aguilar Salum
#Apunte2

#Incializamos variables globales
a = 0
b = 0

def lectura():
    global a        #Se definen las variables como globales, ya que de lo contrario se guardan como locales a la funcion
    global b
    a = int(input("Ingresar el primer valor: "))
    b = int(input("Ingresar el segundo valor: "))

def suma():
    print(f"La suma es: {a + b}")

def resta():
    print(f"La resta es: {a - b}")

def multiplicacion():
    print(f"El producto es: {a * b}")

def division():
    if b != 0:
        print(f"El cociente es: {a / b}")
    else:
        print("Division entre 0")

#------Invocacion de funciones

print("OPERACIONES ARITMETICAS")
print("1. suma")
print("2. resta")
print("3. multiplicacion")
print("4. division")
opc = int(input("Que operacion desea realizar?: "))
if opc < 5:
    lectura()

if opc == 1:
    suma()
elif opc == 2:
    resta()
elif opc == 3:
    multiplicacion()
elif opc == 4:
    division()
else:
    print("Opcion invalida")