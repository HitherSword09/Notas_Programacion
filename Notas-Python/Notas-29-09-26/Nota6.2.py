"""
Aldo Aguilar Salum
Calculadora de bonos segun el tiempo de servicio.
"""

salBas = float(input("Salario basico: "))
tieSer = int(input("Tiempo de servicio: "))

#Procesos parciales
if tieSer < 5:
    porBon = 0.05
else:
    if tieSer < 10:
        porBon = 0.10
    else:
        if tieSer < 15:
            porBon = 0.15
        else:
         if tieSer < 20:
            porBon = 0.20
         else:
             if tieSer < 25:
                porBon = 0.25
             else:
                if tieSer < 30:
                    porBon = 0.35
                else:
                    porBon = 0.50

valBon = salBas * porBon

#Datos de salida parciales
print(f"porcentaje de bonificacion: {porBon*100}")
print(f"Valor de la bonificacion: {valBon}")