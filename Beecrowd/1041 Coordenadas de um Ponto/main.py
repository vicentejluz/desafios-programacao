entrada = input().split()
X, Y = entrada

X = float(X)
Y = float(Y)
           
if X == 0 and Y == 0:
    print("Origem")
elif X == 0:
    print("Eixo Y")
elif Y == 0:
    print("Eixo X")
if X < 0  and Y < 0:
    print("Q3")
elif X < 0 and Y > 0:
    print("Q2")
elif Y < 0 and X > 0:
    print("Q4")
elif X > 0 and Y > 0:
    print("Q1")