n, c, m = [int(_) for _ in input().split()]
cont = c

fc = [int(_) for _ in input().split()[:c]]

fb = [int(_) for _ in input().split()[:m]]

for carimbado in fc:
    for comprado in fb:
        if comprado == carimbado:
            cont -= 1
            break

print(cont)