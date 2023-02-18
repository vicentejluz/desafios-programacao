import math

while(True):
    try:
        PI = 3.14
        v = float(input())
        d = float(input())

        raio = d / 2

        area = PI * math.pow(raio, 2)
        alt = v / area

        print("ALTURA = %.2f" %alt)
        print("AREA = %.2f" %area)
    except EOFError:
        break