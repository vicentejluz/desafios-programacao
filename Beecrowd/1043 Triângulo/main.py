entrada = [float(i) for i in input().split()]
A = entrada[0]
B = entrada[1]
C = entrada[2]

if ((B - C) < A and A < (B + C)) and ((A - C) < B and  B < (A + C)) and ((A - B) < C and C < (A + B)):
    Per = A + B + C
    print("Perimetro = %.1f" %Per)
else:
    Ar = ((A + B) * C) / 2
    print ("Area = %.1f" %Ar)