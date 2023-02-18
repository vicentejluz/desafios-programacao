n = int(input())

for _ in range(n):
    std = input()
    gd = float(input())

    res = 0

    lista = [float(_) for _ in input().split()]

    for i in lista:
        res += i
    
    maior = max(lista)
    menor = min(lista)

    res = (res - (maior + menor)) * gd 

    print(f"{std} %.2f" %res)