import math

entrada = input().split()
a = float(entrada[0])
b = float(entrada[1])
c = float(entrada[2])

delta = b * b - 4 * a * c

if delta < 0 or a == 0:
    print("Impossivel calcular")
else:
    x1 = (-b + math.sqrt(delta)) / (2 * a)
    x2 = (-b - math.sqrt(delta)) / (2 * a)
    print("R1 = %0.5f" %x1)
    print("R2 = %0.5f" %x2)