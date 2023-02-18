entrada = [int(i) for i in input().split()]
P1 = entrada[0]
C1 = entrada[1]
P2 = entrada[2]
C2 = entrada[3]

esquerda = P1 * C1
direita = P2 * C2

if esquerda == direita:
    print("0")
elif esquerda > direita:
    print("-1")
else:
    print("1")