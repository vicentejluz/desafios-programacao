n = 5
cont = 0
conect1 = [int(_) for _ in input().split()]
conect2 = [int(_) for _ in input().split()]

for i in range(n):
    if conect1[i] != conect2[i]:
        cont += 1

if cont == n:
    print("Y")
else:
    print("N")