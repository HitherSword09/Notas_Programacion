#Aldo Aguilar Salum
#Almacen que ofece descuentos a sus clientes segun el valir de sus compras

valCom = float(input("Ingresa el valor de tu compra: $"))

if valCom >= 500000:
    des = 0.30
elif valCom >= 400000:
    des = 0.25
elif valCom >= 300000:
    des = 0.20
elif valCom >= 200000:
    des = 0.15
elif valCom >= 100000:
    des = 0.10
else:
    des = 0.0

if des > 0:
    valDes = valCom * des
    valFin = valCom - valDes
    print(f"Su compra tendra un descuento del {des*100}%")
    print(f"El costo ahora es de: ${valFin}")
else:
    print("Su compra no tiene descuento")