import math

entrada = [float(i) for i in input().split()]
A = entrada[0]
B = entrada[1]
C = entrada[2]
pi = 3.14159

triangulo = A * C / 2
circulo = pi * pow(C, 2)
trapezio = C * (A + B) / 2
quadrado = pow(B, 2)
retangulo = A * B

print("TRIANGULO: %0.3f" %triangulo)
print("CIRCULO: %0.3f" %circulo)
print("TRAPEZIO: %0.3f" %trapezio)
print("QUADRADO: %0.3f" %quadrado)
print("RETANGULO: %0.3f" %retangulo)