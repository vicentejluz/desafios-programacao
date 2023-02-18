entrada = [float(i) for i in input().split()]
A = entrada[0]
B = entrada [1]

if A % B == 0 or B % A == 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")