import math

entrada = [float(i) for i in input().split()]
x1 = entrada[0]
y1 = entrada[1]

entrada1 = [float(i) for i in input().split()]
x2 = entrada1[0]
y2 = entrada1[1]


Distancia = math.sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))
print("%0.4lf" %Distancia)