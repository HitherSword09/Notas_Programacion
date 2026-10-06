#Apunte 4 - Calculadora del IVA
#Aldo Aguilar Salum

precio = float(input("Precio del producto: $"))
cantidad = int(input("Cantidad del producto: $"))

subtotal = precio * cantidad
iva = subtotal * 0.16
total = subtotal + iva

print(f"Subtotal: ${subtotal:.2f}")
print(f"IVA: ${iva:.2f}")
print(f"Total: ${total:.2f}")