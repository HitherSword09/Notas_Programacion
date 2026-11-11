#Aldo Aguilar Salum
'''
Diseñar un algoritmo para calcular el máximo común divisor de cuatro números
basado en un subalgoritmo función mcd (máximo común divisor de dos números).
'''

def mcd(a, b): #crea la funcion para calcular el MCD
    a,b=abs(a),abs(b) #convierte ambos numeros a absolutos
    while b!=0: #repite las operaciones mientras b sea diferente de cero
        a,b=b,a%b #el numero b pasa a ser a y el residuo pasa a ser b
    return a

def mcdnum(a,b,c,d): #crea una función que recibe cuatro números para calcular su MCD
    r1=mcd(a,b) #calcula el MCD de los dos primeros números
    r2=mcd(r1,c) #calcula el MCD del resultado anterior y el tercer número
    r3=mcd(r2,d) #calcula el MCD del resultado anterior y el cuarto número
    return r3 #devuelve el resultado final del MCD de los cuatro números


n1 = int(input("Primer número: "))
n2 = int(input("Segundo número: "))
n3 = int(input("Tercer número: "))
n4 = int(input("Cuarto número: "))

res=mcdnum(n1,n2,n3,n4) #asignacion de valores en orden con la funcion mcdnum

print(f"El MCD de {n1}, {n2}, {n3} y {n4} es: {res}") #imprime el resultado