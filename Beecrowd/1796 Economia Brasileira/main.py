cont, cont2 = 0, 0

q = int(input())

entrada = [int(_) for _ in input().split()]
satisfacao = entrada[0:q]

for sas in satisfacao:
    if sas == 1:
        cont += 1
    else:
        cont2 += 1

if cont >= cont2:
    print("N")
else:
    print("Y")