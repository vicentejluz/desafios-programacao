A, B, C = [int(_) for _ in input().split()]

if A < B:
    temp = A
    A = B
    B = temp

if B < C:
    temp = B
    B = C
    C = temp

if A < B:
    temp = A
    A = B
    B = temp

if A + B > C and A + C > B and B + C > A:
    if A == B and B == C:
        print("Valido-Equilatero")
    elif A == B or B == C:
        print("Valido-Isoceles")
    elif A != B and B != C and C != A:
        print("Valido-Escaleno")
    
    if A * A == B * B + C * C:
        print("Retangulo: S")
    else:
        print("Retangulo: N")
else:
    print("Invalido")