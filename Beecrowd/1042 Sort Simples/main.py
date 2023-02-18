x, y, z = [int(_) for _ in input().split()]

menor, meio, maior = 0, 0, 0


if x < y and x < z:
    menor = x
elif x > y and x > z:
    maior = x
else:
    meio = x

if y < x and y < z:
    menor = y
elif y > x and y > z:
    maior = y
else:
    meio = y

if z < x and z < y:
    menor = z
elif z > x and z > y:
    maior = z
else:
    meio = z
    
print(f"{menor}\n{meio}\n{maior}\n")
print(f"{x}\n{y}\n{z}")